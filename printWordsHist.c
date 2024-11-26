#include <stdio.h>

/* print words lenghts hist vertical */

#define UPPER 80 /* for 80 words */

int main() {

  int c;
  int lw[UPPER];
  int wc, ccount; /* count of words and chars so far */

  wc=ccount=0;

  while(((c=getchar()) != EOF) && (wc<UPPER)) {
    if (c==' ' || c=='\n' || c=='\t') {
      if(ccount>0) {
        lw[wc]=ccount;
        ++wc;
        ccount=0;
      }
    }
    else
      ++ccount;
  }

  printf("WC = %d \n", wc);
 
  printf("\n");

  int toprint=1;
  int line=1; 

  while (toprint==1) {
    toprint=0;
    /*printf("L:%d",line);*/
    for(int i=0;i<wc;++i)
      if(line<=lw[i]) {
        printf(" *");
        toprint=1;
      }
      else
        printf("  ");

    printf("\n");
    ++line;
  }

  printf("\n END OF OUTPUT \n");

}
