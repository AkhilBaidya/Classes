//Classes Project: Music (child) Class Definitions
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: This .cpp file defines the methods within the Music Class, such as its constructor, destructor, and set and get methods for fields such as the artist, duration, and publisher.

  Since Music is a child of the Digital Media Class, it has access to the methods of that parent class, scuh as .getType() (which returns the type of media as an integer - 1 for videogames, 2 for movies, and 3 for music)
*/

#include <iostream>
#include <cstring>
#include "Music.h"

using namespace std;

//CONSTRUCTORS:

//Constructor (sets fields to a default value)
Music::Music() {
  artist = new char[50]; //create space for artist name
  duration = 0.00; //default duration is 0 min
  publisher = new char[50]; //create space for publisher name
  type = 3; //media type is 3
}

//Constructor that takes in input variables:
Music::Music(char theTitle[20], int theYear, char theArtist[50], char thePublisher[50], float theDuration):DigitalMedia(theTitle, theYear) {
  strcpy(title,theTitle); //set title to input
  year = theYear; //set year to input
  
  artist = new char[50]; //create space for artist
  strcpy(artist, theArtist);//set artist to input

  publisher = new char[50];//create space for publisher
  strcpy(publisher, thePublisher);//set publisher to input

  duration = theDuration; //set duration to input
  type = 3;

  /*Source Note (as it appears in VideoGame.cpp): When arriving at errors in my code when creating objects of a class (titles would get overwritten or disappear when attempted to be printed in the main class), my father suggested that the cause might be not using strcpy but = to set my char* fields equal to char* inputs (such as theTitle and thePublisher). To avoid setting my pointer equal to the other pointer (the input), I used strcpy to set my char* fields*/
}

//DESTRUCTOR: 
Music::~Music() {
  delete[] artist;
  delete[] publisher;

   /*Source note (as it appears in VideoGame.cpp): Referred to Rule of Three implementation video on Canvas for how to delete arrays (with [] on delete operator). Refer to DigitalMedia.cpp for link to video.*/
}

//METHODS RELATED TO ARTIST:

//set the artist to input;
void Music::setArtist(char newArtist[50]) {
  strcpy(artist, newArtist);
}

//get (return) the artist: 
char* Music::getArtist() {
  return artist;
}

//METHODS RELATED TO PUBLISHER:

//set the publisher to input:
void Music::setPublisher(char newPublisher[50]) {
  strcpy(publisher, newPublisher);
}

//return the publisher:
char* Music::getPublisher() {
  return publisher;
}

//METHODS RELATED TO DURATION:

//set the duration (in minutes) to input:
void Music::setDuration(float newDuration) {
  duration = newDuration;
}

//get (return) the duration of the song:
float Music::getDuration() {
  return duration;
}
