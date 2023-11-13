//Classes Project: Video Game (Child) Class Header
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: The Video Game Class Header states the unique fields and methods that will be used in a Video Game object, such as the fields of publisher and rating (and their get and set methods)

This class, as child class of the Digital Media Class, will also inherit methods and fields from that parent class (such as the field of title and its get and set methods).
 */

#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //parent class

using namespace std;

class VideoGame : public DigitalMedia {
  //A VideoGame has a Title, Year, Publisher, and Rating


  //PUBLIC CONTENT:

public:
  
  //CONSTRUCTORS:
  VideoGame();

  //construct with setting variables to inputs:
  VideoGame(char theTitle[20], int theYear, char thePublisher[50], float theRating);
   
  //DESTRUCTOR:
  virtual ~VideoGame();

  //GET METHODS:
  
  //Get publisher's name:
  char* getPublisher();

  /*idea to return names with char* type methods from Mr. Galbraith's video on Canvas on Basic Classes and Vectors (refer to DigitalMedia.h for the link to the video): since c++ functions do not return arrays, returning a character pointer to an array can help with accessing that array representing a name
   */
  

  //Get game's rating:
  float getRating();

  //SET METHODS:
  
  //Set the publisher's name:
  void setPublisher(char newPublisher[50]);

  //Set the game's rating:
  void setRating(float newRating);


  //PROTECTED CONTENT: (fields unique to the Video Game class)
 protected:
  
  char* publisher; //the name of the game's publisher
  float rating; //the game's rating
};
