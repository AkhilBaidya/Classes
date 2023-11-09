#ifndef DIGITALMEDIA_H
#define DIGITALMEDIA_H 

//Classes Project: Digital Media (Parent) Class Header
//by Akhil Baidya

//Submission date: 11/8/2023

/*About: The Digital Media Class Header states the fields and methods that will be in a
Digital Media object. This includes the fields of a title (a character pointer to an array) and a year (and integer)
and their respective set and get methods.

This class will act as the parent class to other "media" classes (Video Games, Music, and Movies). All media, in
this project, will share the fields of title and year (of publication).
 */


/*Source for Header Guards: Referred link provided in Canvas, https://www.learncpp.com/cpp-tutorial/header-guards/#google_vignette
(written by learncpp.com), for syntax of writing header guards. These guards prevent Digital Media from being redefined if alreday defined (it
will ignore the contents of the header file due to the #ifndef)
 */

#include <iostream>
#include <cstring>

using namespace std;

class DigitalMedia {

  //PUBLIC CONTENT:

public:  


  //CONSTRUCTORS:
  DigitalMedia();
  DigitalMedia(char newTitle[20], int newYear); //create a media object with a specific title and year

  //DESTRUCTOR:
  ~DigitalMedia();//destructor

  //METHODS RELATED TO THE TITLE:
  char* getTitle(); //returns the title

  /*Referred to Mr. Galbraith's video on Basic Classes and Vectors, https://www.youtube.com/watch?v=KD_pItB8Ygg&t=1s,
   when using type char*. While C++ functions cannot return arrays, by returning a character pointer to an array,
   one can then access that array */

  void setTitle(char newTitle[20]); //change the title;


  //METHODS RELATED TO THE PUBLICTION YEAR:
  int getYear(); //returns the year
  void setYear(int newYear); //change the year


  //METHODS RELATED TO THE TYPE (a number identifier of the type of digital media something is):
  int getType(); //returns the type


  //PROTECTED CONTENT (fields unique to DigitalMedia, but will be inherited by children classes):
  
protected:
  
  char* title; //the title
  int year; //the year of publication
  int type; //the type of media
};

#endif
