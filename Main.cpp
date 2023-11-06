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

  char* input = new char[20];
  cin.get(input, 20);
  
  DigitalMedia* coolMedia;
  coolMedia = new DigitalMedia(input, 2023);

  char* output = new char[20];

  strcpy(output, coolMedia -> getTitle());

  for (int i; i < strlen(output); i++) {
    cout << output[i];
  }

  //cout << *(output[0]);

  cout << coolMedia->getYear() << endl;
  coolMedia -> setYear(1578);
  cout << coolMedia->getYear() << endl;
 
  return 0;
}
