#include <iostream>
#include <cstring>
#include "Movie.h"

Movie::Movie() {
  director = new char[50];
  duration = 0.00;
  rating = 0.00;
}

Movie::Movie(char theTitle[20], int theYear, char theDirector[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {
  title = theTitle;
  year = theYear;
  director = theDirector;
  duration = theDuration;
  rating = theRating;
}

void Movie::setDirector(char newDirector[50]) {
}

char* Movie::getDirector(){
}

void Movie::setDuration(float newDuration){
}

float Movie::getDuration(){
}

void Movie::setRating(float newRating){
}

float Movie::getRating() {
}

