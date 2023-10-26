#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //parent class

using namespace std;

class VideoGame : public DigitalMedia {

 public:
  //constructor:
  VideoGame();

  //get publisher:
  char getPublisher();

  //get rating:
  float getRating();

  //set publisher:
  void setPublisher(char newPublisher[50]);

  //set rating:
  void setRating(float newRating);
  

 protected:
  //variables unique to video games:

  char publisher[50];
  float rating;
};
