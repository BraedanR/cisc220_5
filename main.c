//Braedan Robinson 10188414
//Luisa Stocco
#include <stdio.h>
#include "udll.h"

union Data {

  int i;
  int* iPtr;
  float f;
  float* fPtr;
  char c[20];
  char* cPtr;
};

int main() {
  int index = 0;
  union Data data;
  data.i = 10;
  insert(index, data, 0);
  
return 0;
}
