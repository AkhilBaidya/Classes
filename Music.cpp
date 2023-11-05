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
}

char* getArtist() {
}

void setDuration(float newDuration) {
}

float getDuration() {
}

void setRating(float newRating) {
}

float getRating(){
}
