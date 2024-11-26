#include<stdio.h>

int main()
{
	int MAXLINE=100;
	char chars[MAXLINE];
	int i;

	for(i=0;i<MAXLINE-1 && (chars[i]=getchar())!='\n';++i)
		;
	chars[i]='\n';

	for(int j=0;j<MAXLINE && chars[j]!='\n';++j)
	{
		printf("Char[%i]=%c \n",j,chars[j]);
	}
		
}
