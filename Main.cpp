//Classes Project: Main Class
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: In the Main Class, an ADD, SEARCH, and DELETE function will be defined.
The user will be able to edit a vector of Digital Media objects by calling these
functions through their command names

("ADD" will prompt the user to add a new media object of one of the child classes, "SEARCH" will prompt the user to search for entries in the list by name or year, or "DELETE" which will prompt the user to delete media in the vector based on a name or a year)

If the user inputs "QUIT" they will end the program. 
 */

/*Notes: In the current version of the code, the user must input their commands in uppercase (such as "ADD") for the respective function to be called
 */

#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include <vector>

using namespace std;

//FUNCTION PROTOTYPES:
void ADD(vector<DigitalMedia*> &theList);
void SEARCH(vector<DigitalMedia*> &theList);
void DELETE(vector<DigitalMedia*> &theList);
void print(DigitalMedia* object);

//MAIN FUNCTION (this is where the user will input their commands in order to interact with the list of digital media):

int main() {

  bool editList = true; //this will loop the prompts for editing the list of media
  vector<DigitalMedia*> theList; //this is will be the list (the vector) of media
  
  while (editList) {

    //Get what the user wants to do with the media list:
    char command[7];
    cout << "What would you like to do with the Digital Media list (ADD, SEARCH, DELETE, QUIT)?" << endl;
    cin >> command;

    /*Source note: use of strcmp based on code written in my StudentList project, where the strcmp by itself is interpreted as false if the input values are the same (link to project: https://github.com/AkhilBaidya/StudentList)*/

    //ADD command:
    if (!strcmp("ADD", command)) {
      ADD(theList);
    }

    //SEARCH command:
    else if (!strcmp("SEARCH", command)) {
      SEARCH(theList);
    }

    //DELETE command:
    else if (!strcmp("DELETE", command)) {
      DELETE(theList);
    }

    //QUIT command:
    else if (!strcmp("QUIT", command)) {
	editList = false; //this will end the loop
    }
  }

  cout << "exiting the program" << endl;
  return 0;
}


//ADD FUNCTION:

/*Prompts the user for the type of media they want to add to the vector of media. Takes in user inputs for fields of the media object to create the object and put it in the vector.
 */

/*Source note: Referred to Mr. Galbraith's video on Basic Classes and Vectors for the syntax of how to pass by reference a vector into a function (link to video
 https://www.youtube.com/watch?v=KD_pItB8Ygg&t=1s)*/

void ADD(vector<DigitalMedia*> &theList) { 

  //Variable to determine what type of media user wants to create:
  char type[10]; 

  //Variables to input into fields all media have (as children of Digital Media Class): 
  char theTitle[20]; //the title
  int theYear; //the year

  //Getting the type of media user wants to create:
  cout << "What kind of media would you like to add (videogame, music, movie)?" << endl;
  cin >> type;

  //Setting the title of the media:
  cout << "What is its title?" << endl;
  cin >> theTitle;

  //Setting the year of the media:
  cout << "What is its year of publication?" << endl;
  cin >> theYear;

  //Specifically for videogames:
  if (!strcmp("videogame", type)) { //if the user wants to create a videogame...

  //Variables to input into fields unique to videogames:
  char thePublisher[50];
  float theRating;

  //Setting the publisher:
  cout << "Who is the game's publisher?" << endl;
  cin >> thePublisher;

  //Setting the rating:
  cout << "What is the game's rating?" << endl;
  cin >> theRating;


  //Creating the videogame and pushing it into the vector (media list):
  VideoGame* newGame = new VideoGame(theTitle, theYear, thePublisher, theRating);
  theList.push_back(newGame);

  /*Referenced Mr. Galbraith's video on Basic Classes and Vectors for syntax of creating an object of a certain class (needing to make a pointer of the class). Video link at https://www.youtube.com/watch?v=KD_pItB8Ygg&t=1s.*/
  }


  //Specifically for music objects:
  if (!strcmp("music", type)) { //if the user wants to create media of the type "music"...

    //Variables to input into fields unique to music objects:
  char theArtist[50];
  float theDuration;
  char thePublisher2[50];

  //Setting the artist:
  cout << "Who is the song's artist?" << endl;
  cin >> theArtist;

  //Setting the publisher:
  cout << "Who is the song's publisher?" << endl;
  cin >> thePublisher2;

  //Setting the duration:
  cout << "What is the song's duration (in minutes)?" << endl;
  cin >> theDuration;

  //Creating the Music object and pushing it into the vector (the media list):
  Music* newSong = new Music(theTitle, theYear, theArtist, thePublisher2, theDuration);
  theList.push_back(newSong);

  /*Referenced Mr. Galbraith's video on Basic Classes and Vectors for syntax of creating an object of a certain class (needing to make a pointer of the class). Video link at https://www.youtube.com/watch?v=KD_pItB8Ygg&t=1s.*/
  }

  //Specifcally for movies:  
  if (!strcmp("movie", type)) { //if the user wants to create media of the type "movie"...

    //Variables to input into the fields unique to movie objects:
  char theDirector[50];
  float theDuration2;
  float theRating2;

  //Setting the director:
  cout << "Who is the movie's director?" << endl;
  cin >> theDirector;

  //Setting the duration:
  cout << "What is the movies's duration (in minutes)?" << endl;
  cin >> theDuration2;

  //Setting the rating:
  cout << "What is the movies's rating?" << endl;
  cin >> theRating2;

  //Creating the movie object and pushing it back into the vector (media list):
  Movie* newMovie = new Movie(theTitle, theYear, theDirector, theDuration2, theRating2);
  theList.push_back(newMovie);

  /*Referenced Mr. Galbraith's video on Basic Classes and Vectors for syntax of creating an object of a certain class (needing to make a pointer of the class). Video link at https://www.youtube.com/watch?v=KD_pItB8Ygg&t=1s.*/

  }

  cout << "added digital media" << endl; //confirmation

  return;
}


//SEARCH function:

/* The user will choose whether to search for media in the vector of digital media by their name or by their publication year. In either choice, media with that title or year in the vector will be printed out (using the defined print function)
 */

void SEARCH(vector<DigitalMedia*> &theList) {

  //The user will decide whether to search by name or year:
  char choice[20];
  cout << "Would you like to search by name or year?" << endl;
  cin >> choice;

  //If the user chooses to search by name:
  if (!strcmp("name", choice)) {

    //Prompt for the name of the media the user wants to see: 
    char name[20];
    cout << "What is the name of the media you are searching for?" << endl;
    cin >> name;

    //for every element currently in the vector of digital media objects:
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (!strcmp(name, (*object) -> getTitle())) { //if an object has the name the user inputted:

	print((*object)); //print the details of the object
	
      }
      
    }
    
  }


  //If the user chooses to search by year:
  else if (!strcmp("year", choice)) {

    //Prompt for the year of the media the user wants to see:
    int year;
    cout << "What is the year of the media you are searching for?" << endl;
    cin >> year;

    //for every element currently in the vector of digital media objects:
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (year == ((*object) -> getYear())) { //if an object has the year the user inputted:

	print((*object)); //print the details of the object

      }   
    }
  }
  
  return;
}


//DELETE function:
/*
The delete function, like the search function, can be delete by name or year.
For each related (with the same name or year) object in the vector of media,
the user will be prompted to delete it or not. That value will both be erased
from the vector and then deleted (using the destructor) if the user says yes. 
 */

void DELETE(vector<DigitalMedia*> &theList) {

  //The user will choose to delete by name or by year:
  char choice[20];
  cout << "Would you like to delete by name or year?" << endl;
  cin >> choice;

  //Setting up for erasing vector values:
  vector<vector<DigitalMedia*>::iterator> toDel; //stores iterators that point towards what I want to erase from the original vector of digital media

  //If the user wants to delete by name:
  if (!strcmp("name", choice)) {

    //Get the name of the media the user wants to delete:
    char name[20];
    cout << "What is the name of the media you want to delete?" << endl;
    cin >> name;

    //for every element in the vector of media: 
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
       
      if (!strcmp(name, (*object) -> getTitle())) { //if an object has the name the user inputted:

	print((*object)); //print out the object for the user's reference

	//Ask the user if they want to delete that object:
	char answer; 
	cout << "Would you like to delete this entry? y/n" << endl;
	cin >> answer;
	if (answer == 'y') {
	  toDel.push_back(object); /*add the iterator pointing to the DigitalMedia* to the toDel vector (at the end, where all wanted iterators are added, will erase the DigitalMedia* they point towards in the origin vector and delete those objects as well*/
	}
      }
    }
  }

  //If the user wants to delete by year:
  else if (!strcmp("year", choice)) {

    //Find the year of the media the user wants to delete:
    int year;
    cout << "What is the year of the media you want to delete?" << endl;
    cin >> year;

    //for every element in the vector
    for (vector<DigitalMedia*>::iterator object = theList.begin(); object != theList.end(); object++) {
      
      if (year == ((*object) -> getYear())) { //if an object has the year the user inputted:
	print((*object)); //print the object for the user's reference


	//Prompt the user whether they want to delete the object:
	char answer2; 
	cout << "Would you like to delete this entry? y/n" << endl;
	cin >> answer2;
	if (answer2 == 'y') {
	  toDel.push_back(object); //if so, add the iterator pointing to the DigitalMedia* we want removed to the vector of iterators
	}
      } 
    }
  }

  
  int counter = 0; //counter will note how much the original vector of DigitalMedia* shrinks by as elements are deleted within it

  /* Source note (reason for second vector idea): help from my father in identifying that it could be difficult to delete objects in the original iterator (since the vector "theList()" it refers to would continuously change in size as elements deleted)

     As a result, I created a vector of the iterators that point to the DigitalMedia* I want deleted. 
   */
  
  for (vector<vector<DigitalMedia*>::iterator>::iterator rem = toDel.begin(); rem != toDel.end(); rem++) {
    
    vector<DigitalMedia*>::iterator willDel = (*rem) - counter; /*Suggestion from my father to subtract a value (increasing by one) from iterator value each deletion, since the size of the original vector theList the iterator will point to will decrease by one each deletion.*/

    /*For instance, an iterator originally pointing to third location C (in vector containing A, B, C), once B is deleted, won't be pointint to C anymore (since C is not in the third position anymore*/
    
    delete (*willDel); //Help from Mr. Galbraith in noting that the delete operator will by default call the destructor of the object (no need to call it) 
    
    theList.erase(willDel); //syntax for erasing value in vector by "index" or iterator from cplusplus.com at https://cplusplus.com/reference/vector/vector/erase/


    counter++; //to adjust for the descreasing size of theList as I remove values from it!
  }
  return;
}


//print function:

/*
The print function takes a DigitalMedia pointer and prints out all the details
of that class object (which differs by the type of media the object is)
 */

void print(DigitalMedia* object) {

  //For all types of media (all DigitalMedia):
  cout << "Title: " << object -> getTitle() << ", "; //print the title
  cout << "Year of Publication: " << (object) -> getYear() << ", "; //print the year
  //for videogames specifically:
  if (1 == ((object) -> getType())) { //if the object is a videogame (type 1)...
	  
  VideoGame* game = static_cast<VideoGame*>(object);
  /*suggestion to static cast DigitalMedia pointer to child class pointer to access child class methods given by Mr. Galbraith. Referred to GeeksforGeeks (https://www.geeksforgeeks.org/static_cast-in-cpp/) for Syntax to static cast*/
	  
  cout << "Publisher: " << game -> getPublisher() << ", "; //print publisher
  cout << "Rating: " << game -> getRating() << ", "; //print rating
  cout << "Type: " << "Videogame" << endl;
  }

  //for music specifically:
  if (3 == ((object) -> getType())) {//if the object is a music object (type 3)...

  Music* mus = static_cast<Music*>(object);
  cout << "Artist: " << mus -> getArtist() << ", "; //print artist
  cout << "Publisher: " << mus -> getPublisher() << ", "; //print publisher
  cout << "Duration: " << mus -> getDuration() << ", "; //print duration
  cout << "Type: " << "Music" << endl;	  
  }

  //for movies specifically:
  if (2 == ((object)->getType())) {//if the object is a movie (type 2)...

  Movie* mov = static_cast<Movie*>(object);
  cout << "Director: " << mov -> getDirector() << ", "; //print director
  cout << "Duration: " << mov -> getDuration() << ", "; //print duration
  cout << "Rating: " << mov -> getRating() << ", "; //print rating
  cout << "Type: " << "Movie" << endl;
  }

  return;
}
