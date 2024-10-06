#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** knight1 = superImpose(rotateR(knight), grey);
  char** knight2 = superImpose(rotateL(knight), whiteSquare);
  char** chessBoard[] = {knight1, knight2};
  char** result = chessBoard[0];
  for(int i = 1; i < 2; i++){
    result = join(result, chessBoard[i]);
  }
  char** row2 = flipV(result);
  result = up(result, row2);
  interpreter(result);
}


