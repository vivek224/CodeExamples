#include <stdlib.h>
#include <stdio.h>

f(void * x)
{
 * (float *) x = 789.123;
}

main()
{
  double x = 22.0; 
  f( (void *) &x);
  printf("x: %f \n", x);
}
