#include "chess.h"
#include "figures.h"

void display(){
  char** rotate = rotateL(rotateR(knight));
  interpreter(rotate);
}
