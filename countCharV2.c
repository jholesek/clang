#include <stdio.h>

int main() {
  /* count chars in input, v2 using for */

  double nc;

  for(nc=0;getchar()!=EOF;++nc)
    ;

  printf("%.0f\n",nc);
}
