#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include <vector>

using namespace std;

/*Source notes:
  
initial idea of encasing a character array in a Struct taken from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function, user CB Bailey
since a character array cannot be returned from a function, an object that containsan array can be returned instead.

next idea to use char* for function types (that the function returns a char pointer to the array it takes in) is inspired by Mr. Galbraith's video on Classes in Canvas.
  };*/

void ADD(vector<DigitalMedia*> &theList);
void SEARCH(vector<DigitalMedia*> &theList);
void DELETE(vector<DigitalMedia*> &theList);

int main() {

  bool editList = true;
  vector<DigitalMedia*> list;
  
  while (editList) {

    char command[7];
    cout << "What would you like to edit in the Digital Media list (ADD, SEARCH, DELETE, QUIT)?" << endl;
    cin >> command;

    //use of strcmp based on code written in my StudentList project:
    if (!strcmp("ADD", command)) {
      ADD(list);
    }

    else if (!strcmp("SEARCH", command)) {
      SEARCH(list);
    }

    else if (!strcmp("DELETE", command)) {
      DELETE(list);
    }

    else if (!strcmp("QUIT", command)) {
	editList = false; //this will end the loop
    }

  }

  cout << "exiting the program" << endl;
  return 0;
}

void ADD(vector<DigitalMedia*> &theList) { //referred to Mr. Galbraith's video on Classes for pass by reference syntax for vector

  char type[10];
  char theTitle[20];
  int theYear;

  cout << "What kind of media would you like to add (videogame, music, movie)?" << endl;
  cin >> type;

  //set the title:
  cout << "What is its title?" << endl;
  cin >> theTitle;

  //set the year:
  cout << "What is its year of publication?" << endl;
  cin >> theYear;

  //adding a videogame:

  if (!strcmp("videogame", type)) {
  char thePublisher[50];
  float theRating;

  cout << "Who is the game's publisher?" << endl;
  cin >> thePublisher;

  cout << "What is the game's rating?" << endl;
  cin >> theRating;

  VideoGame* newGame = new VideoGame(theTitle, theYear, thePublisher, theRating);
  theList.push_back(newGame);
  }

  //adding a music:

  if (!strcmp("music", type)) {
  char theArtist[50];
  float theDuration;
  float theRating2;

  cout << "Who is the song's artist?" << endl;
  cin >> theArtist;

  cout << "What is the song's duration (in minutes)?" << endl;
  cin >> theDuration;
  
  cout << "What is the song's rating?" << endl;
  cin >> theRating2;

  Music* newSong = new Music(theTitle, theYear, theArtist, theDuration, theRating2);
  theList.push_back(newSong);
  }

  //adding a movie:
  
  if (!strcmp("movie", type)) {
  char theDirector[50];
  float theDuration2;
  float theRating3;

  cout << "Who is the movie's director?" << endl;
  cin >> theDirector;

  cout << "What is the movies's duration (in minutes)?" << endl;
  cin >> theDuration2;
  
  cout << "What is the movies's rating?" << endl;
  cin >> theRating3;

  Movie* newMovie = new Movie(theTitle, theYear, theDirector, theDuration2, theRating3);
  theList.push_back(newMovie);
  }

  cout << "added digital media" << endl;

  return;
}

void SEARCH(vector<DigitalMedia*> &theList) {

  char choice[20];
  cout << "Would you like to search by name or year?" << endl;
  cin >> choice;

  if (!strcmp("name", choice)) {
    char name[20];
    
    
  }

  else if (!strcmp("year", choice)) {
    char year[20];
  }


  return;
}

void DELETE(vector<DigitalMedia*> &theList) {
  char input[20];
  cin >> input;

  VideoGame* media = new VideoGame(input, 1000, input, 5.00);

  cout << media -> getType(); 
  
  delete media;
  //media = NULL;
 //help from Mr. Galbraith for this code
  cout << "deleted!";
 
  //help from mr. galbraith for how to work with deconstructors (delete will just call this decons. and decons. only needs to delete and only will be able to delete pointers and non-primitive type data stored under the class, such as title, not year);
}

