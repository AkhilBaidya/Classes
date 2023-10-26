#include <iostream>
#include <cstring>
#include "DigitalMedia.h"

using namespace std;

//constructor function:
DigitalMedia::DigitalMedia() {

  //create space for the variables in the class:
  title = new char[20];
  year = new int;
  
}

//constructor with setting variables:
DigitalMedia::DigitalMedia(char newTitle[20], int newYear) {

  //create space for the variables:
  title = new char[20];
  year = new int;

  //define them based on the inputs newTitle and newYear:
  strcpy(title, newTitle);
  year = newYear;
}

//getting the title:
DigitalMedia::getTitle() {

}

//getting the year:
DigitalMedia::getYear() {

}
