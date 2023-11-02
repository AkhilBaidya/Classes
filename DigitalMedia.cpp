#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
#include <vector>

using namespace std;

/*struct Title { //idea to return a struct w/ an array instead of an array from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function
  char theTitle[20];
  };*/

//constructor function:
DigitalMedia::DigitalMedia() {

  //create space for the variables in the class:
  title = new char[20];
  //Title = new Title;
  //Title.theTitle = title; //create a Title struct to encase the title array

  int year;
  
}

//construct object of the class and set variables:
DigitalMedia::DigitalMedia(char* newTitle, int newYear) {

  //create space for the variables:
  title = new char[20];
  //Title = new Title;
  //Title.theTitle = title;
  
  int year;

  //define them based on the inputs newTitle and newYear:
  strcpy(*title, *newTitle);

  //title = newTitle;
  year = newYear;
}

//setting the title:
void DigitalMedia::setTitle(char* newTitle) {
  strcpy(*title, *newTitle); //set variable equal to input
  //title = newTitle;
}

//getting the title:
char* DigitalMedia::getTitle() {
  return title;
}

//setting the year:
void DigitalMedia::setYear() {
  year = newYear; //set variable equal to input
}

//getting the year:
int DigitalMedia::getYear() {
  return year;
}
