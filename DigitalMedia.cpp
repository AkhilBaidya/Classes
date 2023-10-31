#include <iostream>
#include <cstring>
#include "DigitalMedia.h"

using namespace std;

struct Title { //idea to return a struct w/ an array instead of an array from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function
  char theTitle[20];
};

//constructor function:
DigitalMedia::DigitalMedia() {

  //create space for the variables in the class:
  title = new char[20];
  Title = new Title;
  Title.theTitle = title; //create a Title struct to encase the title array

  year = new int;
  
}

//construct object of the class and set variables:
DigitalMedia::DigitalMedia(char newTitle[20], int newYear) {

  //create space for the variables:
  title = new char[20];
  Title = new Title;
  Title.theTitle = title;
  
  year = new int;

  //define them based on the inputs newTitle and newYear:
  strcpy(title, newTitle);
  year = newYear;
}

//setting the title:
DigitalMedia::setTitle(char newTitle[20]) {
  strcpy(title, newTitle); //set variable equal to input
}

//getting the title:
Title DigitalMedia::getTitle() {

  
  char* toTitle = new char[20]; 
  (*toTitle) = title;
  return toTitle;
}

//setting the year:
DigitalMedia::setYear() {
  year = newYear; //set variable equal to input
}

//getting the year:
DigitalMedia::getYear() {
  return year;
}
