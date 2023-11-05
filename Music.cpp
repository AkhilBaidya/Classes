#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() {
  artist = new char[50];
  duration = 0.00;
  rating = 0.00;
}

Music::Music(char theTitle[20], int theYear, char theArtist[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {
  title = theTitle;
  year = theYear;
  artist = theArtist;
  duration = theDuration;
  rating = theRating;
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
