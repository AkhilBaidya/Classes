//Classes Project: Music (Child) Class Header
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: The Music Class Header states the fields and methos that will be included in a Music object, such as the fields artist, duration, and publisher and their respect get and set methods.

This class is a child of the Digital Media class and thus inherits fields and methods from that parent class (such as the fields title and year and their set and get methods)
 */

#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //the parent class

//needs extra: artist, duration, rating

using namespace std;

class Music : public DigitalMedia {

  //Music object has a Title, Year, Artist, Publisher, and Duration:

  //PUBLIC CONTENT:

public:


  //CONSTRUCTORS:
  Music();
  Music(char theTitle[20], int theYear, char theArtist[50], char thePublisher[50], float theDuration); //create a Music object with specific values for fields 

  //DESTRUCTOR:
  ~Music();

  //GET METHODS:

  char* getArtist(); //get the artist name
  
  char* getPublisher(); //get the publisher name

  /*Once again, referred to Mr. Galbraith's video on Canvas, on Basic Classes and Vectors (link in DigitalMedia.h file), for idea of using char* type methods to return a way to access character arrays that represent a name. While c++ cannot use functions to return arrays, a character pointer can be returned that refers to the array*/

  float getDuration(); //get the duration (in minutes) of the song

  //SET METHODS:
  void setArtist(char newArtist[50]); //set artist name

  void setPublisher(char newPublisher[50]); //set publisher name
  
  void setDuration(float newDuration); //set duration of song


  //PROTECTED CONTENT: (fields specific to the Music class)
 protected:

  char* artist; //the artist's name
  float duration; //the duration of the song
  char* publisher; //the publisher's name
  
};
