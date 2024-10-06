#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** two = up(grey, whiteSquare);
  char** col1 = repeatV(two, 2);
  char** result = repeatH(col1, 8);

  interpreter(result);
}

