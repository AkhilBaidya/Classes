#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame():DigitalMedia() {
  publisher = new char[50];
  rating = 0.00; //default rating
  type = 1;
}

VideoGame::VideoGame(char theTitle[20], int theYear, char thePublisher[50], float theRating):DigitalMedia(theTitle, theYear) {
  strcpy(title, theTitle);//make sure to use strcpy, otherwise I am setting my pointer equal to the other pointer (suggestion by my father)
  year = theYear;
  //publisher = thePublisher;
  publisher = new char[50]; //cause of segmentation error -> forgot to include
  strcpy(publisher, thePublisher);
  rating = theRating;
  type = 1;
}

VideoGame::~VideoGame() {
  delete[] publisher; //don't need [] since publisher is a pointer
}

void VideoGame::setPublisher(char newPublisher[50]) {
  strcpy(publisher,newPublisher);
}

char* VideoGame::getPublisher() {
  return publisher;
}

void VideoGame::setRating(float newRating) {
  rating = newRating;
}

float VideoGame::getRating() {
  return rating;
}

