#include "chess.h"
#include "figures.h"

void display(){
  char** rotateLeft = rotateL(knight);
  interpreter(rotateLeft);
}
