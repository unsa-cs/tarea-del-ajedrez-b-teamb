#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** knight1 = superImpose(rotateR(knight), grey);
  char** knight2 = superImpose(rotateL(knight), whiteSquare);
  char** tablero[] = {knight1, whiteSquare, knight2, whiteSquare};
  char** result = tablero[0];
  for(int i = 1; i < 4; i++){
    result = join(result, tablero[i]);
  }
  char** row2 = flipV(result);
  result = up(result, row2);
  interpreter(result);
}


