#include <stdio.h>

float tocels(int);

int main() {

  for(int i=0; i < 300; i=i+20)
    printf(" %3d F = %6.1f C \n",i,tocels(i));

  return 0;
}

/* convert F to C */
float tocels(int fahr) {
  return (5.0/9.0)*(fahr-32.0);
}
