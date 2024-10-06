#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** squares[2] = {whiteSquare, greySquare};
  char** rowResult;

  for(int i = 0; i < 1; i++){
    int k = (i % 2 == 0) ? 1 : 0;
    char** row = squares[k];

    for(int j = 1; j < 8; j++){
      if(k + 1 == 1){
        k++;
      }else{
        k = 0;
      }
      row = join(row, squares[k]);
    }
    rowResult = row;
  }
  interpreter(rowResult);
}
