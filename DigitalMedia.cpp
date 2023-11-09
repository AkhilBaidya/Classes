//Classes Project: Digital Media (Parent) Class Definitions
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: This .cpp file defines the methods within the Digital Media Class, such as
the constructor, destructor, and set and get methods for fields such as title and publication year.

This class, Digital Media, will be the parent class to the other classes in the project, where these methods will be inherited by the children classes (VideoGames, Music, and Movies).
 */


#include <iostream>
#include <cstring>
#include "DigitalMedia.h"

using namespace std;

//CONSTRUCTORS:

//Constructor (sets fields to some default value):
DigitalMedia::DigitalMedia() {

  title = new char[20]; //creates space for the title
  
  year = 2023; //default year is 2023

  type = 0; //default type of media is undefined (indentified by integer 0)
  
}

//Constructor with input variables:
DigitalMedia::DigitalMedia(char newTitle[20], int newYear) {
  
  title = new char[20]; //creates space for title
  
  year = newYear; //set the year to input

  type = 0; //set the type to default type 0
  
  strcpy(title, newTitle); //set the title to input
}

//DESTRUCTOR:

//Destroys class object when called:
DigitalMedia::~DigitalMedia() {

  /*Help from Mr. Galbraith in clarifying what needs to be deleted in a destructor:

    Pointers need to be deleted (as they are connected to outside objects initialized as "new" which would otherwise remain when the Class Object is deleted)
  */

  /*Additionally, referenced video of Rule of Three Implementation in Canvas,
  https://www.youtube.com/watch?v=PXcRe-W2w7s&t=980s (by ReelLearning), which supported the idea that I needed to delete such dynamically allocated memory. This source also showed to use [] in delete operator when deleting array. */
  
  delete[] title;

}


//METHODS RELATED TO TITLE:

//Setting the title to a value:
void DigitalMedia::setTitle(char newTitle[20]) {
  strcpy(title, newTitle); //set title equal to input
}

//Getting the title:
char* DigitalMedia::getTitle() { 
  return title; //return the title

  /*Referenced Mr. Galbraith's video for using type char* for getTitle() to be able to access array from method (refer to DigitalMedia.h for link to source)*/ 
}

//METHODS RELATED TO YEAR:

//Setting the year to a value:
void DigitalMedia::setYear(int newYear) {
  year = newYear; //set year equal to input
}

//Getting the year:
int DigitalMedia::getYear() {
  return year; //return the year
}

//METHOD RELATED TO TYPE:

//Get (return) the identifying number for the type of media:
int DigitalMedia::getType() {
  return type;
}
