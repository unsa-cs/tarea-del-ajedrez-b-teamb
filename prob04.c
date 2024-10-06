#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** rook1 = superImpose(rook, greySquare);
  interpreter(rook1);
}
