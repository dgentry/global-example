#include <stdio.h>
#include "increment.h"

int g;

void main()
{
  g = 0;
  printf("g is %d\n", g);
  increment(&g);
  printf("g is %d\n", g);
}
