#include <stdio.h>

int main() {
  /* count lines by counting newline chars */

  int c, nl;

  nl=0;
  c=0;
  while((c=getchar())!=EOF)
    if(c == '\n')
      ++nl;

  printf("%d\n",nl);
}
