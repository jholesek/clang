#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char as[]={'t','w','o','\0'};

	char* asp[3]={"one","two","three"};

	int e=strcmp(asp[1],as);

	printf("E= %i \n",e);

	printf("Niz= %s <EOS>\n",as);

	printf("asp[1][1]= %c \n",asp[1][1]);
	for(int i=0;i<=2;++i)
		printf("asp[%i]= %s .\n",i,asp[i]);
}
