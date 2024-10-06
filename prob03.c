#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** two = up(grey, whiteSquare);
  char** col1 = repeatV(two, 4);

  interpreter(col1);
}

