#include <iostream>
#include <cstring>
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
  char thePublisher[50];
  float theRating;

  cout << "Who is the game's publisher?" << endl;
  cin >> thePublisher;

  cout << "What is the game's rating?" << endl;
  cin >> theRating;

  VideoGame* newGame = new VideoGame(theTitle, theYear, thePublisher, theRating);
  theList.push_back(newGame);
  

  //adding a music:
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
  
  //adding a movie:
  char theDirector[50];
  float theDuration2;
  float theRating3;

  cout << "Who is the game's publisher?" << endl;
  cin >> thePublisher;

  cout << "What is the game's rating?" << endl;
  cin >> theRating;

  VideoGame* newGame = new VideoGame(theTitle, theYear, thePublisher, theRating);
  theList.push_back(newGame);
  
  return;
}

void SEARCH(vector<DigitalMedia*> &theList) {
  return;
}

void DELETE(vector<DigitalMedia*> &theList) {
  return;
}

