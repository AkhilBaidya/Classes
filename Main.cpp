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
  vector<DigitalMedia*> theList;
  
  while (editList) {

    char command[7];
    cout << "What would you like to edit in the Digital Media list (ADD, SEARCH, DELETE, QUIT)?" << endl;
    cin >> command;

    //use of strcmp based on code written in my StudentList project:
    if (!strcmp("ADD", command)) {
      ADD(theList);
    }

    else if (!strcmp("SEARCH", command)) {
      SEARCH(theList);
    }

    else if (!strcmp("DELETE", command)) {
      DELETE(theList);
    }

    else if (!strcmp("QUIT", command)) {
	editList = false; //this will end the loop
    }

    /*testing if vector elements can be accessed
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
    cout << *object << endl;
    cout << (*object) -> getTitle() << endl; 
    }*/
  
  }

  cout << "exiting the program" << endl;
  return 0;
}

void ADD(vector<DigitalMedia*> &theList) { //referred to Mr. Galbraith's video on Classes for pass by reference syntax for vector

  /*testing if vector elements can be accessed:
  cout << "what are the contents of vector?" << endl;
  
  for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
    cout << (*object) -> getYear()<<endl; 
    }*/
  
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
  char thePublisher2[50];

  cout << "Who is the song's artist?" << endl;
  cin >> theArtist;

  cout << "Who is the song's publisher?" << endl;
  cin >> thePublisher2;

  cout << "What is the song's duration (in minutes)?" << endl;
  cin >> theDuration;

  Music* newSong = new Music(theTitle, theYear, theArtist, thePublisher2, theDuration);
  theList.push_back(newSong);
  }

  //adding a movie:
  
  if (!strcmp("movie", type)) {
  char theDirector[50];
  float theDuration2;
  float theRating2;

  cout << "Who is the movie's director?" << endl;
  cin >> theDirector;

  cout << "What is the movies's duration (in minutes)?" << endl;
  cin >> theDuration2;
  
  cout << "What is the movies's rating?" << endl;
  cin >> theRating2;

  Movie* newMovie = new Movie(theTitle, theYear, theDirector, theDuration2, theRating2);
  cout << newMovie -> getTitle();
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
    cout << "What is the name of the media you are searching for?" << endl;
    cin >> name;

    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (!strcmp(name, (*object) -> getTitle())) { //if an object has the name inputted:

	cout << "Title: " << (*object) -> getTitle() << ", "; //print the title
	cout << "Year of Publication: " << (*object) -> getYear() << ", "; //print the year


	//for videogames specifically:
	if (1 == ((*object) -> getType())) {

	  // from https://www.geeksforgeeks.org/static_cast-in-cpp/ static cast

	  VideoGame* game = static_cast<VideoGame*>(*object);
	  
	  cout << "Publisher: " << game -> getPublisher() << ", "; //print publisher
	  cout << "Rating: " << game -> getRating() << ", "; //print rating
	  cout << "Type: " << "Videogame" << endl;

	}

	//for music:
	if (3 == ((*object) -> getType())) {

	  Music* mus = static_cast<Music*>(*object);
	  cout << "Artist: " << mus -> getArtist() << ", "; //print artist
	  cout << "Publisher: " << mus -> getPublisher() << ", "; //print publisher
	  cout << "Duration: " << mus -> getDuration() << ", "; //print duration
	  cout << "Type: " << "Music" << endl;
	  
	}

	//for movies:

	if (2 == ((*object)->getType())) {

	  Movie* mov = static_cast<Movie*>(*object);
	  
	  cout << "Director: " << mov -> getDirector() << ", "; //print director
	  cout << "Duration: " << mov -> getDuration() << ", "; //print duration
	  cout << "Rating: " << mov -> getRating() << ", "; //print rating
	  cout << "Type: " << "Movie" << endl;
	}
      }
      
    }
    
  }

  else if (!strcmp("year", choice)) {

    int year;
    cout << "What is the year of the media you are searching for?" << endl;
    cin >> year;

    //copied from above (the search by name)
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (year == ((*object) -> getYear())) { //if an object has the year inputted:

	cout << "Title: " << (*object) -> getTitle() << ", "; //print the title
	cout << "Year of Publication: " << (*object) -> getYear() << ", "; //print the year


	//for videogames specifically:
	if (1 == ((*object) -> getType())) {

	  // from https://www.geeksforgeeks.org/static_cast-in-cpp/ static cast

	  VideoGame* game = static_cast<VideoGame*>(*object);
	  
	  cout << "Publisher: " << game -> getPublisher() << ", "; //print publisher
	  cout << "Rating: " << game -> getRating() << ", "; //print rating
	  cout << "Type: " <<  "Videogame" << endl;

	}

	//for music:
	if (3 == ((*object) -> getType())) {

	  Music* mus = static_cast<Music*>(*object);
	  cout << "Artist: " << mus -> getArtist() << ", "; //print artist
	  cout << "Publisher: " << mus -> getPublisher() << ", "; //print publisher
	  cout << "Duration: " << mus -> getDuration() << ", "; //print duration
	  cout << "Type: " << "Music" << endl;
	  
	}

	//for movies:

	if (2 == ((*object)->getType())) {

	  Movie* mov = static_cast<Movie*>(*object);
	  
	  cout << "Director: " << mov -> getDirector() << ", "; //print director
	  cout << "Duration: " << mov -> getDuration() << ", "; //print duration
	  cout << "Rating: " << mov -> getRating() << ", "; //print rating
	  cout << "Type: " << "Movie" << endl;
	}
      }   
    }
  }
  return;
}

void DELETE(vector<DigitalMedia*> &theList) {

  //choose to delete by name or by year:
  char choice[20];
  cout << "Would you like to delete by name or year?" << endl;
  cin >> choice;


  //copied and pasted code from the search function (since the delete function will have the same functionality):
  if (!strcmp("name", choice)) {
    char name[20];
    cout << "What is the name of the media you want to delete?" << endl;
    cin >> name;

    cout << "Here are all the media with that name: " << endl;
    int num = 0;
    
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (!strcmp(name, (*object) -> getTitle())) { //if an object has the name inputted:

	num++; //increase number to delete
	
	cout << "Title: " << (*object) -> getTitle() << ", "; //print the title
	cout << "Year of Publication: " << (*object) -> getYear() << ", "; //print the year


	//for videogames specifically:
	if (1 == ((*object) -> getType())) {
	  
	  VideoGame* game = static_cast<VideoGame*>(*object);
	  
	  cout << "Publisher: " << game -> getPublisher() << ", "; //print publisher
	  cout << "Rating: " << game -> getRating() << ", "; //print rating
	  cout << "Type: " << "Videogame" << endl;

	}

	//for music:
	if (3 == ((*object) -> getType())) {

	  Music* mus = static_cast<Music*>(*object);
	  cout << "Artist: " << mus -> getArtist() << ", "; //print artist
	  cout << "Publisher: " << mus -> getPublisher() << ", "; //print publisher
	  cout << "Duration: " << mus -> getDuration() << ", "; //print duration
	  cout << "Type: " << "Music" << endl;
	  
	}

	//for movies:

	if (2 == ((*object)->getType())) {

	  Movie* mov = static_cast<Movie*>(*object);
	  
	  cout << "Director: " << mov -> getDirector() << ", "; //print director
	  cout << "Duration: " << mov -> getDuration() << ", "; //print duration
	  cout << "Rating: " << mov -> getRating() << ", "; //print rating
	  cout << "Type: " << "Movie" << endl;
	}
      }
      
    }

    char answer; 
    cout << "Would you like to delete these entries? y/n" << endl;
    cin >> answer;
    if (answer == 'y') {
      if (num > 0) {
	for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
	  delete (*object);
	}
      }
      else {
	cout << "nothing to delete!" << endl;
      }
    }
    
  }

  else if (!strcmp("year", choice)) {

    int year;
    cout << "What is the year of the media you are searching for?" << endl;
    cin >> year;

    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (year == ((*object) -> getYear())) { //if an object has the year inputted:

	cout << "Title: " << (*object) -> getTitle() << ", "; //print the title
	cout << "Year of Publication: " << (*object) -> getYear() << ", "; //print the year


	//for videogames specifically:
	if (1 == ((*object) -> getType())) {

	  // from https://www.geeksforgeeks.org/static_cast-in-cpp/ static cast

	  VideoGame* game = static_cast<VideoGame*>(*object);
	  
	  cout << "Publisher: " << game -> getPublisher() << ", "; //print publisher
	  cout << "Rating: " << game -> getRating() << ", "; //print rating
	  cout << "Type: " <<  "Videogame" << endl;

	}

	//for music:
	if (3 == ((*object) -> getType())) {

	  Music* mus = static_cast<Music*>(*object);
	  cout << "Artist: " << mus -> getArtist() << ", "; //print artist
	  cout << "Publisher: " << mus -> getPublisher() << ", "; //print publisher
	  cout << "Duration: " << mus -> getDuration() << ", "; //print duration
	  cout << "Type: " << "Music" << endl;
	  
	}

	//for movies:

	if (2 == ((*object)->getType())) {

	  Movie* mov = static_cast<Movie*>(*object);
	  
	  cout << "Director: " << mov -> getDirector() << ", "; //print director
	  cout << "Duration: " << mov -> getDuration() << ", "; //print duration
	  cout << "Rating: " << mov -> getRating() << ", "; //print rating
	  cout << "Type: " << "Movie" << endl;
	}
      }   
    }
  }
 
  
  /*char input[20];
  cin >> input;

  char input2[50];
  cin >> input2;

  VideoGame* media = new VideoGame(input, 1000, input2, 5.00);
  
  cout << media -> getTitle() << endl;
  
  delete media;
  media = NULL;

  //help from Mr. Galbraith for this code
  cout << "deleted!";
 
  //help from mr. galbraith for how to work with deconstructors (delete will just call this decons. and decons. only needs to delete and only will be able to delete pointers and non-primitive type data stored under the class, such as title, not year);*/
}

