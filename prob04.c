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
  char** result1 = join(rook1, knight1);
  char** result2 = join(bishop1, queen1);
  char** result3 = join(king1, bishop2);
  char** result4 = join(knight2, rook2);
  char** mid1 = join(result1, result2);
  char** mid2 = join(result3, result4);
  char** resultF = join(mid1, mid2);
  interpreter(resultF);
}
