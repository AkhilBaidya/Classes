#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //parent class

using namespace std;

class VideoGame : public DigitalMedia {

 public:

  const char* type = "videogame";
  
  //constructor:
  VideoGame();

  //construct with setting variables:
  VideoGame(char theTitle[20], int theYear, char thePublisher[50], float theRating);

  //deconstructor:
  ~VideoGame(); 

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
