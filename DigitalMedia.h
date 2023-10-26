//DigitalMedia Class:

#include <iostream>
#include <cstring>

using namespace std;

class DigitalMedia {

public:

  DigitalMedia(); //constructor
  DigitalMedia(char newTitle[20], int newYear); //create a media with a specific title and year

  char getTitle(); //function to get the title
  int getYear(); //function to get the year

  char setTitle(); //set just the title;
  int setYear(); //set just the year

private:

  //the title and year specific to a piece of digital media:
  char title[20];
  int year;
};
