#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** result = join(grey, whiteSquare);
  char** row1 = repeatH(result, 4);
  char** row2 = reverse(row1);
  char** rows = up(row1, row2);
  interpreter(rows);
}

