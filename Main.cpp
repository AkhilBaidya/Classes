#include <iostream>
#include <cstring>
#include "VideoGame.h"
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
  return 0;
}

void ADD(vector<DigitalMedia*> theList) {
  return;
}

void SEARCH(vector<DigitalMedia*> theList) {
  return;
}

void DELETE(vector<DigitalMedia*> theList) {
  return;
}

