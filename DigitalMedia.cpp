#include <iostream>
#include <cstring>
#include "DigitalMedia.h"

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
  year = 2023; //default year

  type = 0;
  
}

//construct object of the class and set variables:
DigitalMedia::DigitalMedia(char newTitle[20], int newYear) {

  //create space for the variables:
  title = new char[20];
  //Title = new Title;
  //Title.theTitle = title;
  
  year = newYear;

  type = 0;
  
  //define them based on the inputs newTitle and newYear:
  strcpy(title, newTitle);

  //title = newTitle;
  
}

//destroy class object:
DigitalMedia::~DigitalMedia() {
  delete[] title; //https://www.youtube.com/watch?v=PXcRe-W2w7s&t=980s was used to get that I need to only delete dynamically allocated memory (video provided on Canvas about the Rule of Three implementation - also showed how to delete an array with delete[])
}


//setting the title:
void DigitalMedia::setTitle(char newTitle[20]) {
  strcpy(title, newTitle); //set variable equal to input
  //title = newTitle;
}

//getting the title:
char* DigitalMedia::getTitle() {
  return title;
}

//setting the year:
void DigitalMedia::setYear(int newYear) {
  year = newYear; //set variable equal to input
}

//getting the year:
int DigitalMedia::getYear() {
  return year;
}

int DigitalMedia::getType() {
  return type;
}
