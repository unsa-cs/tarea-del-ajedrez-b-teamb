#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** squares[2] = {whiteSquare, greySquare};
  char** rowResult;

  char** knight1 = rotateL(knight);
  char** knight2 = rotateR(knight);
  char** knight3 = knight;
  char** knight4 = rotateL(rotateL(knight));

  int posX[4] = {2, 3, 5, 7};
  int posY[4] = {1, 3, 4, 6};
  char** knights[4] = {knight1, knight2, knight3, knight4};
  int itknight = 0;

  for(int i = 0; i < 8; i++){
    int itcolor = (i % 2 == 0) ? 1 : 0;
    char** row = squares[itcolor];

    for(int j = 1; j < 8; j++){
      if(itcolor + 1 == 1){
        itcolor++;
      }else{
        itcolor = 0;
      }

      char** col = squares[itcolor];

      if( itknight < 4){
        if(i == posX[itknight] && j == posY[itknight]){
          col = superImpose(knights[itknight], col);
          itknight++;
        }
      }

      row = join(row, col);
    }

    if(i == 0){
      rowResult = row;
    }else{
      rowResult = up(rowResult, row);
    }
  }

  interpreter(rowResult);
}
