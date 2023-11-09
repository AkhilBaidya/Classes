//Classes Project: Movie (child) Class Header
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: The Movie Class Header states the unique fields and methods used in a Movie object, such as the fields of director, duration, and rating and their respective get and set methods.

This class, as a child of the Digital Media Class, will inherit methods and fields from that parent class, such as the fields of title and its get and set methods.
 */

#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //the parent class!

using namespace std;

class Movie : public DigitalMedia {
  //Movies have a Title, Year, Director, Duration, and Rating:


  //PUBLIC CONTENT:
 public:

  //CONSTRUCTORS:
  Movie();
  Movie(char theTitle[20], int theYear, char theDirector[50], float theDuration, float theRating); //construct class object with setting variables to inputs

  //DESTRUCTOR:
  ~Movie();

  //GET METHODS:
  char* getDirector(); //return the director name

  /*Source notes (as it appears in VideoGame.h): idea to return names with char* type methods from Mr. Galbraith's video on Canvas on Basic Classes and Vectors (refer to DigitalMedia.h for the link to the video): since c++ functions do not return arrays, returning a character pointer to an array can help with accessing that array representing a name */

  float getDuration(); //return the duration (in minutes)
  float getRating(); //return the movie rating 

  //SET METHODS:
  void setDirector(char newDirector[50]); //set director name to input
  void setDuration(float newDuration); //set duration to input
  void setRating(float newRating); //set rating to input


  //PROTECTED CONTENT: (fields unique to the Music class) 
 protected:

  char* director; //director name
  float duration; //duration of movie (in minutes)
  float rating; //rating of movie
};
