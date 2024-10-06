#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** two = up(grey, whiteSquare); 
  char** col1 = repeatV(two, 2);
  char** col2 = reverse(col1);
  char** twoCols = join(col1, col2);
  char** result = repeatH(twoCols, 4);

  interpreter(result);
}

