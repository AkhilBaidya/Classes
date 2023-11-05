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

void VideoGame::setPublisher(char newPublisher[50]) {
  
}

char* VideoGame::getPublisher() {
  return publisher;
}

void VideoGame::setRating(float newRating) {

}

float VideoGame::getRating() {
  return rating;
}
