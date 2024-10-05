#include "chess.h"
#include "figures.h"

void display(){
  char** BlackRook = reverse(rook);
  char** impose = superImpose(BlackRook, whiteSquare); 
  interpreter(impose);
}
