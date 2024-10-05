#include "chess.h"
#include "figures.h"

void display(){
  char** white = whiteSquare;
  char** grey = reverse(whiteSquare);
  char** result = join(white, grey);
  interpreter(result);
}
