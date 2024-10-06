#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** two = join(grey, whiteSquare);
  char** row1 = repeatH(two, 4);
  char** row2 = reverse(row1);
  char** rows = up(row1, row2);
  char** result = repeatV(rows, 2);
  interpreter(result);
}

