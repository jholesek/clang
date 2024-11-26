#include<stdio.h>

int main() {
  /* count chars in input, v1 */

  long nc;

  nc=0;
  while (getchar() != EOF )
    ++nc;

  printf("%ld\n",nc);
}
