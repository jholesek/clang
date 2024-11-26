#include<stdio.h>

//On each line, the calibration value can be found by combining the first digit and the last digit (in that order) to form a single two-digit number.

int main()
{
	int sum=0;
	int first=0;
	int last=0;
	char c;

	for(int i=0;(c=getchar())!=EOF;i++)
	{
		if(c>'0' && c<='9')
		{
			if(first==0)
				first=c-48;
			else
				last=c-48;
		}
		if(c=='\n')
		{
			if(last==0)
				last=first;
			sum+=10*first+last;
			first=0;
			last=0;
		}
	}

	printf("Sum= %i \n",sum);
}
