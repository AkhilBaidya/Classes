#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
#include <vector>

using namespace std;

/*struct Title { //idea of encasing a character array in a Struct taken from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function, user CB Bailey

  //since a character array cannot be returned from a function, an object that contains an array can be returned instead.

  
  char theTitle[20];
  };*/
  
int main() {

  //char* inputPntr = new char[20];
  char input[20]; 
  cin.get(input, 20);
  char* inputPnt = input;
  
  DigitalMedia* coolMedia = new DigitalMedia(input,1500);

  char* output = coolMedia -> getTitle();

  //strcpy(output, coolMedia -> getTitle());


  /*for (int i; i< strlen(input); i++) {
    cout << input[i];
    }*/

  cout << "in the for loop with " << strlen(output) << " length" << endl;
  for (int i = 0; i < strlen(output); i++) {
    cout << "oh" << endl;
    cout << output[i];
    }
  cout << "out of the for loop" << endl;
  
  cout << coolMedia->getYear() << endl;
  
  coolMedia -> setYear(1578);

  cout << coolMedia->getYear() << endl;
  return 0;
}
