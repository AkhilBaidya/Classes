#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() {
  artist = new char[50];
  duration = 0.00;
  publisher = new char[50]; //need publisher
  type = 3;
}

Music::Music(char theTitle[20], int theYear, char theArtist[50], char thePublisher[50], float theDuration):DigitalMedia(theTitle, theYear) {
  strcpy(title,theTitle);
  year = theYear;
  //artist = theArtist; //refer to VideoGame.cpp comments - setting pointer to another pointer was the main error I saw, where my vector of media, when iterated through, could not print titles
  artist = new char[50]; //added to avoid segmentation fault
  strcpy(artist, theArtist);

  publisher = new char[50];
  strcpy(publisher, thePublisher);

  
  duration = theDuration;
  type = 3;
}

void Music::setArtist(char newArtist[50]) {
  strcpy(artist, newArtist);//strcpy instead of =
}

char* Music::getArtist() {
  return artist;
}

void Music::setPublisher(char newPublisher[50]) {
  strcpy(publisher, newPublisher);
}

char* Music::getPublisher() {
  return publisher;
}

void Music::setDuration(float newDuration) {
  duration = newDuration;
}

float Music::getDuration() {
  return duration;
}
