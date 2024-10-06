#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** filaCasillas[2] = {whiteSquare, greySquare};
  char** figuras[8] = {rook, knight, bishop, queen, king, bishop, knight, rook};
  char** result = superImpose(figuras[0], filaCasillas[1]);
  for(int i = 1; i < 8; i++){
    int j = (i % 2 == 0) ? 1 : 0;
    char** tmp = superImpose(figuras[i], filaCasillas[j]);
    result = join(result, tmp);
  }
  char** resultReverse = reverse(result);
  interpreter(resultReverse);
}
