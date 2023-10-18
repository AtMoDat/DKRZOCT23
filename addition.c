#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  double x = atof(argv[1]);
  double result = x+x;
  printf("results %f\n", result);
  return 0;
}
