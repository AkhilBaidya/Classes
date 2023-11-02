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
  
  DigitalMedia* coolMedia = new DigitalMedia(input, 2023);
  
  /*Title output;

  output = coolMedia -> getTitle();
  cout << output -> theTitle[0];
  cout << coolMedia->getYear() << endl;
  coolMedia -> setYear(1578);
  cout << coolMedia->getYear() << endl;
  */
  return 0;
}
