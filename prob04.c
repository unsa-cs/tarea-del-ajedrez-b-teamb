#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** rook1 = superImpose(rook, greySquare);
  char** knight1 = superImpose(knight, whiteSquare);
  char** bishop1 = superImpose(bishop, greySquare);
  char** queen1 = superImpose(queen, whiteSquare);
  char** king1 = superImpose(king, greySquare);
  char** bishop2 = superImpose(bishop, whiteSquare);
  char** knight2 = superImpose(knight, greySquare);
  char** rook2 = superImpose(rook, whiteSquare);
  interpreter(knight1);
}
