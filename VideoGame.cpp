//Classes Project: Video Game (child) Class Definitions
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: This .cpp file defines the methods within the Video Game Class, such as its constructor, destructor, and set and get methods for fields such as publisher and rating.

  Since Video Game is a child of the Digital Media Class, it has access to the methods of that parent class, such as .getTitle() (which returns the title of the media).
 */

#include <iostream>
#include <cstring>
#include "VideoGame.h"

using namespace std;

//CONSTRUCTORS:

//Constructor (sets fields to some default value):
VideoGame::VideoGame():DigitalMedia() {
  publisher = new char[50]; //create space for publisher
  rating = 0.00; //default rating is 0
  type = 1; //type of 1 means media is a videogame
}

//Constructor with input variables:
VideoGame::VideoGame(char theTitle[20], int theYear, char thePublisher[50], float theRating):DigitalMedia(theTitle, theYear) {
  strcpy(title, theTitle); //set title to input
  year = theYear; //set year to input
  publisher = new char[50]; //create space for publisher
  strcpy(publisher, thePublisher); //set publisher to input
  rating = theRating; //set rating to input
  type = 1;

  /*Source Note: When arriving at errors in my code when creating objects of a class (titles would get overwritten or disappear when attempted to be printed in the main class), my father suggested that the cause might be not using strcpy but = to set my char* fields equal to char* inputs (such as theTitle and thePublisher). To avoid setting my pointer equal to the other pointer (the input), I used strcpy to set my char* fields*/
}

//DECONSTRUCTOR:
VideoGame::~VideoGame() {
  delete[] publisher; /*Referred to Rule of Three implementation video on Canvas for how to delete arrays (with [] on delete operator). Refer to DigitalMedia.cpp for link to video.*/
}

//METHODS RELATED TO PUBLISHER:

//set publisher:
void VideoGame::setPublisher(char newPublisher[50]) {
  strcpy(publisher,newPublisher); //set publisher to input
}

//get (return) the publisher:
char* VideoGame::getPublisher() {
  return publisher;
}

//METHODS RELATED TO RATING:

//set rating:
void VideoGame::setRating(float newRating) {
  rating = newRating; //set rating to input
}

//get (return) rating:
float VideoGame::getRating() {
  return rating;
}

