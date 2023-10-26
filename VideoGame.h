#include <iostream>
#include <cstring>
#include "DigitalMedia.h" //parent class

using namespace std;

class VideoGame : public DigitalMedia {

 public:  

  
 protected:
  //variables unique to video games:

  char publisher[50];
  float rating;
};
