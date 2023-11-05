#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //the parent class!

//needs extra: director, duration, rating

using namespace std;

class Movie : public DigitalMedia {

 public:

  Movie();

  Movie(char theTitle[20], int theYear, char theDirector[50], float theDuration, float theRating);
  

 protected:

  char* director;
  float duration;
  float rating;
  
};
