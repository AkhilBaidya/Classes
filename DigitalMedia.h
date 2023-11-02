//DigitalMedia Class:

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class DigitalMedia { //idea to have title returned as a struct instead of an array from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function

  /*struct Title {
    char theTitle[20];
    };*/
  
public:

  DigitalMedia(); //constructor
  DigitalMedia(char* newTitle, int newYear); //create a media with a specific title and year

  char* getTitle(); //function to get the title
  int getYear(); //function to get the year

  void setTitle(char* newTitle); //set just the title;
  void setYear(int newYear); //set just the year

private:

  //the title and year specific to a piece of digital media:
  char* title;
  int year;
  //Title Title;
};
