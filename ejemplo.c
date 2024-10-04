#include "chess.h"
#include "figures.h"

void display(){
  char** white = whiteSquare;
  char** gris = reverse(whiteSquare);
  char** result = join(white, gris);
  

  char** casillas = repeatH(result,4);
  interpreter(result);

  interpreter(reverse(casillas));
}
