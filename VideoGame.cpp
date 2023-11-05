#include <iostream>
#include <cstring>
#include "VideoGame.h"

VideoGame::VideoGame() {
  publisher = new char[50];
  rating = 0.00; //default rating
}

VideoGame::VideoGame(char theTitle[20], int theYear, char thePublisher[50], float theRating) {
  title = theTitle;
  year = theYear;
  publisher = thePublisher;
  rating = theRating;
}

VideoGame::setPublisher(char newPublisher[50]) {
  
}

VideoGame::getPublisher() {

}

VideoGame::setRating(int newRating) {

}

VideoGame::getRating() {

}
