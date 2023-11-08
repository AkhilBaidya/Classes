#include <iostream>
#include <cstring>
#include "Movie.h"

Movie::Movie() {
  director = new char[50];
  duration = 0.00;
  rating = 0.00;
  type = 2;
}

Movie::Movie(char theTitle[20], int theYear, char theDirector[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {
  strcpy(title, theTitle);
  year = theYear;
  //director = theDirector;
  strcpy(director, theDirector);
  duration = theDuration;
  rating = theRating;
  type = 2;
}

Movie::~Movie(){
  //delete[] title;
  //delete[] director;
  delete director; //which is a pointer -> don't need []
}

void Movie::setDirector(char newDirector[50]) {
  director = newDirector;
}

char* Movie::getDirector(){
  return director;
}

void Movie::setDuration(float newDuration){
  duration = newDuration;
}

float Movie::getDuration(){
  return duration;
}

void Movie::setRating(float newRating){
  rating = newRating;
}

float Movie::getRating() {
  return rating;
}

