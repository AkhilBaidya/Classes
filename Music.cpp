#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() {
  artist = new char[50];
  duration = 0.00;
  rating = 0.00;
  type = 3;
}

Music::Music(char theTitle[20], int theYear, char theArtist[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {
  strcpy(title,theTitle);
  year = theYear;
  //artist = theArtist; //refer to VideoGame.cpp comments - setting pointer to another pointer was the main error I saw, where my vector of media, when iterated through, could not print titles
  strcpy(artist, theArtist);
  duration = theDuration;
  rating = theRating;
  type = 3;
}

void Music::setArtist(char newArtist[50]) {
  artist = newArtist;
}

char* Music::getArtist() {
  return artist;
}

void Music::setDuration(float newDuration) {
  duration = newDuration;
}

float Music::getDuration() {
  return duration;
}

void Music::setRating(float newRating) {
  rating = newRating;
}

float Music::getRating(){
  return rating;
}
