#include <iostream>
#include <cstring>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include <vector>

using namespace std;

/*Source notes:
  
initial idea of encasing a character array in a Struct taken from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function, user CB Bailey
since a character array cannot be returned from a function, an object that containsan array can be returned instead.

next idea to use char* for function types (that the function returns a char pointer to the array it takes in) is inspired by Mr. Galbraith's video on Classes in Canvas.
  };*/
  
int main() {

  bool editList = true;
  vector<DigitalMedia*> list;
  
  while (editList) {

    char command[7];
    cin << "What would you like to edit in the Digital Media list (ADD, SEARCH, DELETE, QUIT)?" << endl;
    cin >> command;

    //use of strcmp based on code written in my StudentList project:
    if (strcmp("ADD", command) != 0) {
      ADD(list);
    }

    else if (strcmp("SEARCH", command) != 0) {
      SEARCH(list);
    }

    else if (strcmp("DELETE", command) != 0) {
      DELETE(list);
    }

    else if (strcmp("QUIT", command) != 0) {
	editList = false; //this will end the loop
    }

  }

  /*Testing code:
  char input[20]; 
  cin >> input;

  char input2[50];
  cin >> input2;
  
  VideoGame* coolMedia = new VideoGame(input,2024, input2, 0.00);

  char* output = coolMedia -> getTitle();

  for (int i = 0; i < strlen(output); i++) {
    cout << output[i];
    }

  char* pub = coolMedia -> getPublisher();

  for (int i = 0; i < strlen(pub); i++) {
    cout << pub[i];
  }
  
  cout << coolMedia->getYear() << endl;
  
  coolMedia -> setYear(1578);

  cout << coolMedia->getYear() << endl;

  cout << coolMedia -> getRating() << endl;

  coolMedia -> setRating (1.5);

  cout << coolMedia -> getRating() << endl;*/

  cout << "exiting the program" << endl;
  return 0;
}

void ADD(vector<DigitalMedia*> theList) {

  char type[10];
  char theTitle[20];
  int theYear;

  cout << "What kind of media would you like to add (videogame, music, movie)?" << endl;
  cin >> type;

  //set the title:
  cout << "What is its title?" << endl;
  cin >> theTitle;

  //set the year:
  cout << "What is its year of publication?" << endl;
  cin >> theYear;

  //adding a videogame:
  char thePublisher[50];
  float theRating;

  //adding a music:
  char theArtist[50];
  float theDuration;
  float theRating;

  //adding a movie:
  char theDirector[50];
  float theDuration;
  float theRating;
  
  return;
}

void SEARCH(vector<DigitalMedia*> theList) {
  return;
}

void DELETE(vector<DigitalMedia*> theList) {
  return;
}

