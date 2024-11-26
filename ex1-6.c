#include <stdio.h>

int main() {
  int c;

  printf("EOF = %d\n", EOF);

  while((c=(getchar()!=EOF)))
    printf("%d",c);

  printf("\n last one = %d\n",c);
}
