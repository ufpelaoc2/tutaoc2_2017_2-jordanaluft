#include "fatorial.h"

int fatorial(int x){
  int fatorial=1;

  if(x==0)
    return -1;
  else if (x < 0)
    return -1;
  else {
    while (x > 0){
      fatorial = fatorial * x;
      x--;
    }
  }
}
