#include "chess.h"
#include "figures.h"

void display(){
  char** greySquare = reverse(whiteSquare);
  char** filaCasillas[2] = {whiteSquare, greySquare};
  char** figuras[8] = {rook, knight, bishop, queen, king, bishop, knight, rook};
  char** final[8];
  for(int i = 0; i < 8; i++){
    if(i % 2 == 0){
      final[i] = superImpose(figuras[i], filaCasillas[1]);
    }
    else{
      final[i] = superImpose(figuras[i], filaCasillas[0]); 
    }
  }
  interpreter(final[1]);
}
