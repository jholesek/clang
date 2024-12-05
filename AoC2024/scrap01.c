#include <stdio.h>

int main()
{
	char s[80];

	int first, second=0;
	int* frst=&first;
	int* scnd=&second;

	while(fgets(s,80,stdin)!=NULL)
	{
		printf("LINE: %s \n",s);

		sscanf(s,"%i %i",frst,scnd);

		printf("First: %i , Second: %i \n",first, second);
	}

}
