#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //parent class

using namespace std;

class VideoGame : public DigitalMedia {

 public:
  //constructor:
  VideoGame();

  //construct with setting variables:
  VideoGame(char title[20], int year, char publisher[50], float rating);

  //get publisher:
  char* getPublisher();

  //get rating:
  float getRating();

  //set publisher:
  void setPublisher(char newPublisher[50]);

  //set rating:
  void setRating(float newRating);
  

 protected:
  //variables unique to video games:

  char* publisher;
  float rating;
};
