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

void setArtist(char newArtist[50]) {
  artist = newArtist;
}

char* getArtist() {
  return artist;
}

void setDuration(float newDuration) {
  duration = newDuration;
}

float getDuration() {
  return duration;
}

void setRating(float newRating) {
  rating = newRating;
}

float getRating(){
  return rating;
}
