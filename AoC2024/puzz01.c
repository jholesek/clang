#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b)
{
	return(*(int*)a - *(int*)b);
}

int main()
{
	char s[80];

	int first, second=0;
	int* frst=&first;
	int* scnd=&second;

	int col1[1000];
	int col2[1000];

	int i=0;

	while(fgets(s,80,stdin)!=NULL)
	{
		//printf("LINE: %s \n",s);

		sscanf(s,"%i %i",frst,scnd);
		col1[i]=first;
		col2[i++]=second;
		//printf("First: %i , Second: %i \n",first, second);
	}

	for(int j=0;j<=5;++j)
	{
		printf("V%i: %i , %i \n",j,col1[j],col2[j]);
	}

	qsort(col1, i-1, sizeof(int), comp);
	qsort(col2, i-1, sizeof(int), comp);

	printf("\nSorted: \n");

	for(int j=0;j<=5;++j)
	{
		printf("V%i: %i , %i \n",j,col1[j],col2[j]);
	}
	
	printf("col1: %lu , col1[0]: %lu , n: %lu , i: %i \n",sizeof(col1),sizeof(col1[0]),sizeof(col1)/sizeof(col1[0]),i);
}
