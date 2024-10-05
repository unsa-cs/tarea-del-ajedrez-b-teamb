#include "chess.h"
#include "figures.h"

void display(){
  char** BlackRook = reverse(rook);
  char** impose = superImpose(BlackRook, whiteSquare); 
  char** impose2 = superImpose(knight, whiteSquare);
  char** result = join(impose, impose2);
  interpreter(result);
}
