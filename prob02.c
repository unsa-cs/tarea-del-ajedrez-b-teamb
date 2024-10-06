#include "chess.h"
#include "figures.h"

void display(){ 
  char** grey = reverse(whiteSquare);
  char** result = join(grey, whiteSquare);
  char** row = repeatH(result, 4);
  interpreter(row);
}
