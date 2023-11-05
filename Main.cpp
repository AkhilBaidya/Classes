#include <iostream>
#include <cstring>
#include "DigitalMedia.h"
#include <vector>

using namespace std;

/*Source notes:
  
initial idea of encasing a character array in a Struct taken from https://stackoverflow.com/questions/4264304/how-to-return-an-array-from-a-function, user CB Bailey
since a character array cannot be returned from a function, an object that containsan array can be returned instead.

next idea to use char* for function types (that the function returns a char pointer to the array it takes in) is inspired by Mr. Galbraith's video on Classes in Canvas.
  };*/
  
int main() {

  char input[20]; 
  cin.get(input, 20);
  
  DigitalMedia* coolMedia = new DigitalMedia(input,2024);

  char* output = coolMedia -> getTitle();

  for (int i = 0; i < strlen(output); i++) {
    cout << output[i];
    }

  
  cout << coolMedia->getYear() << endl;
  
  coolMedia -> setYear(1578);

  cout << coolMedia->getYear() << endl;

  return 0;
}
