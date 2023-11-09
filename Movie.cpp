//Classes Project: Movie (child) Class Definitions
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: This .cpp file defines the methods within the Movie Class, such as its constructor, destructor, and set and get methods for fields such as director, duration, and rating.

  Since Music is a child of the Digital Media Class, it has access to the methods of that parent class, such as .getType() (which returns the type of media as a number - 1 being for videogames, 2 for movies, and 3 for music).
 */

#include <iostream>
#include <cstring>
#include "Movie.h"

using namespace std;

//CONSTRUCTORS:

//Constructor (sets fields to some default value):
Movie::Movie() {
  director = new char[50]; //create space for director name
  duration = 0.00; //default duration is 0
  rating = 0.00; //default rating is 0
  type = 2; //type of 2 means media is a movie
}

//Constructor with input variables:
Movie::Movie(char theTitle[20], int theYear, char theDirector[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {
  strcpy(title, theTitle); //set title to input
  year = theYear; //set year to input
  director = new char[50]; //create space for director (avoids segmentation fault)
  strcpy(director, theDirector); //set director to input
  duration = theDuration; //set duration to input
  rating = theRating; //set rating to input
  type = 2;

   /*Source Note (as taken from VideoGame.cpp): When arriving at errors in my code when creating objects of a class (titles would get overwritten or disappear when attempted to be printed in the main class), my father suggested that the cause might be not using strcpy but = to set my char* fields equal to char* inputs (such as theTitle and thePublisher). To avoid setting my pointer equal to the other pointer (the input), I used strcpy to set my char* fields*/
}

//DESTRUCTOR:
Movie::~Movie(){
  delete[] director; /*Referred to Rule of Three implementation video on Canvas fo\
r how to delete arrays (with [] on delete operator). Refer to DigitalMedia.cpp for
link to video.*/

  //Additionally: On discussion with father, I decided not to delete char* fields from parent class in this constructor, since the parent's destructor will likely be called already and remove that field
}

//METHODS RELATED TO DIRECTOR:

//set director name to input:
void Movie::setDirector(char newDirector[50]) {
  strcpy(director, newDirector);
}

//get (return) director name:
char* Movie::getDirector(){
  return director;
}

//METHODS RELATED TO DURATION:

//set duration to input:
void Movie::setDuration(float newDuration){
  duration = newDuration;
}

//get (return) duration (in minutes):
float Movie::getDuration(){
  return duration;
}

//METHODS RELATDE TO RATING:

//set rating to input:
void Movie::setRating(float newRating){
  rating = newRating;
}

//return rating:
float Movie::getRating() {
  return rating;
}

