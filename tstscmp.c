#include<stdio.h>
#include<string.h>

int main()
{
	char s[]="aena";
	char* c="ena";

	printf("rez1 %i \n",strcmp(&s[1],c));
	printf("rez2 %i \n",strcmp(&s[2],c));
}
