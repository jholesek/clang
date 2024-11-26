#include<stdio.h>

int main() {
  /* replace multiple blanks with a single one */

  int c, oc;

  oc=EOF; /* previous char */

  while((c=getchar())!=EOF) {
    if(c==' ')
      if(oc!=' ')
        putchar(c);

    if(c!=' ')
      putchar(c);

    oc=c;
  }
}
