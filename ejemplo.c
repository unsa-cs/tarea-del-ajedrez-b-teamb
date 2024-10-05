#include "chess.h"
#include "figures.h"

void display(){
  char** espejoV = flipV(knight);
  interpreter(espejoV);
}
