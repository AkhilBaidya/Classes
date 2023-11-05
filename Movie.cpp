#include <iostream>
#include <cstring>
#include "Movie.h"

Movie::Movie() {
}

Movie::Movie(char theTitle[20], int theYear, char theDirector[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {
}
