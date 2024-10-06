#include "chess.h"
#include "figures.h"

void display(){
  char** grey = reverse(whiteSquare);
  char** queenB = superImpose(reverse(queen), grey);
  char** queenW = superImpose(reverse(queen), whiteSquare);
  char** row1[] = {whiteSquare, grey, whiteSquare, grey, whiteSquare, queenB, whiteSquare, grey};
  char** row2[] = {grey, whiteSquare, queenB, whiteSquare, grey, whiteSquare, grey, whiteSquare};
  char** row3[] = {whiteSquare, grey, whiteSquare, grey, queenW, grey, whiteSquare, grey};
  char** row4[] = {grey, whiteSquare, grey, whiteSquare, grey, whiteSquare, grey, queenW};
  char** row5[] = {queenW, grey, whiteSquare, grey, whiteSquare, grey, whiteSquare, grey};
  char** row6[] = {grey, whiteSquare, grey, queenW, grey, whiteSquare, grey, whiteSquare};
  char** row7[] = {whiteSquare, queenB, whiteSquare, grey, whiteSquare, grey, whiteSquare, grey};
  char** row8[] = {grey, whiteSquare, grey, whiteSquare, grey, whiteSquare, queenB, whiteSquare};

  char** row1f = row1[0];
  char** row2f = row2[0];
  char** row3f = row3[0];
  char** row4f = row4[0];
  char** row5f = row5[0];
  char** row6f = row6[0];
  char** row7f = row7[0];
  char** row8f = row8[0];
 
  for(int i = 1; i < 8; i++){
    row1f = join(row1f, row1[i]);
    row2f = join(row2f, row2[i]);  
    row3f = join(row3f, row3[i]);
    row4f = join(row4f, row4[i]);
    row5f = join(row5f, row5[i]);
    row6f = join(row6f, row6[i]);
    row7f = join(row7f, row7[i]);
    row8f = join(row8f, row8[i]);
   }  

  char** chessBoard[] = {row1f, row2f, row3f, row4f, row5f, row6f, row7f, row8f};
  char** result = chessBoard[0];  

  for(int i = 1; i < 8; i++){
    result = up(result, chessBoard[i]);
  }
  interpreter(result);
} 

