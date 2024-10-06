#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** result = join(grey, whiteSquare);
  char** row = repeatH(result, 4);
  char** figures[8] = {rook, knight, bishop, queen, king, bishop, knight, rook};
  char** rowf = join(figures[0], figures[1]);
  for(int i = 2; i < 8; i += 2){
    char** tmp = join(figures[i], figures[i+1]);
    rowf = join(rowf, tmp);
  }
  char** finalRow = superImpose(rowf, row);
  interpreter(finalRow);
}

