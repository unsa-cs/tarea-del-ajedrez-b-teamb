#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** filaCasillas[2] = {whiteSquare, greySquare};
  char** figuras[8] = {rook, knight, bishop, queen, king, bishop, knight, rook};
  char** row1 = superImpose(figuras[0], filaCasillas[1]);
  char** row2 = superImpose(pawn, filaCasillas[0]);

  for(int i = 1; i < 8; i++){
    int j = (i % 2 == 0) ? 1 : 0;
    int k = (i % 2 == 0) ? 0 : 1;

    char** tmp = superImpose(figuras[i], filaCasillas[j]);
    char** tmpPawn = superImpose(pawn, filaCasillas[k]);

    row1 = join(row1, tmp);
    row2 = join(row2, tmpPawn);
  }
  char** twoRows = up(row1, row2);
  char** two = up(greySquare, whiteSquare); 
  char** col1 = repeatV(two, 2);
  char** col2 = reverse(col1);
  char** twoCols = join(col1, col2);
  char** fourRows = repeatH(twoCols, 4);
  char** sixRows = up(twoRows, fourRows);
  char** result = up(sixRows, reverse(row2));
  interpreter(result);
}
