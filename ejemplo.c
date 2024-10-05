#include "chess.h"
#include "figures.h"

void display(){
  char** espejoH = flipH(knight);
  interpreter(espejoH);
}
