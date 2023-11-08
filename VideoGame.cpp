#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame() {
  publisher = new char[50];
  rating = 0.00; //default rating
}

VideoGame::VideoGame(char theTitle[20], int theYear, char thePublisher[50], float theRating):DigitalMedia(theTitle, theYear) {
  title = theTitle;
  year = theYear;
  publisher = thePublisher;
  rating = theRating;
}

VideoGame::~VideoGame() {
  delete publisher;
}

void VideoGame::setPublisher(char newPublisher[50]) {
  publisher = newPublisher;
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

char* VideoGame::getType() {
  return type;
}
