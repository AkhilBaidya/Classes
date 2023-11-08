#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //the parent class

//needs extra: artist, duration, rating

using namespace std;

class Music : public DigitalMedia {

 public:

  Music();
  
  Music(char theTitle[20], int theYear, char theArtist[50], char thePublisher[50], float theDuration); 

  char* getArtist();

  char* getPublisher();

  float getDuration();

  void setArtist(char newArtist[50]);

  void setPublisher(char newPublisher[50]);
  
  void setDuration(float newDuration);

 protected:

  char* artist;
  float duration;
  char* publisher;


};
