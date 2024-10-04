#include "chess.h"
#include "figures.h"

void display(){
  char** white = whiteSquare;
  char** gris = reverse(whiteSquare);
  char** result = join(white, gris);
  interpreter(result);
}
