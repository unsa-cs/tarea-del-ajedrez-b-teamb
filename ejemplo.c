#include "chess.h"
#include "figures.h"

void display(){
  char** rey = king;
  char** espejoV = flipV(rey);
  interpreter(espejoV);
}
