#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //the parent class

//needs extra: artist, duration, rating

using namespace std;

class Music : public DigitalMedia {

 public:

  Music();
  
  Music(char theTitle[20], int theYear, char theArtist[50], float theDuration, float theRating); 

  char* getArtist();

  float getDuration();

  float getRating();

  void setArtist(char newArtist[50]);

  void setDuration(float newDuration);

  void setRating (float newRating);

 protected:

  char* artist;
  float duration;
  float rating;


};
