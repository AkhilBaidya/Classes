#include <iostream>
#include <cstring>
#include "Music.h"

Music::Music() {
}

Music::Music(char theTitle[20], int theYear, char theArtist[50], float theDuration, float theRating):DigitalMedia(theTitle, theYear) {

}

void setArtist(char newArtist[50]) {
}

char* getArtist() {
}

void setDuration(float newDuration) {
}

float getDuration() {
}

void setRating(float newRating) {
}

float getRating(){
}
