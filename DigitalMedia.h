//DigitalMedia Class:

#include <iostream>
#include <cstring>

using namespace std;

class DigitalMedia {

public:

  DigitalMedia(); //constructor
  DigitalMedia(char title[20], int year); //create a media with a specific title and year

  char getTitle(); //function to get the title
  char getYear(); //function to get the year

private:

  //the title and year specific to a piece of digital media:
  char title[20];
  int year;
};
