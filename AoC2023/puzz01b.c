#include<stdio.h>
#include<string.h>

//On each line, the calibration value can be found by combining the first digit and the last digit (in that order) to form a single two-digit number.

int main()
{
	int sum=0;
	int first=0;
	int last=0;
	char c;

	char line[128];
	int cl=0; //chars in line

	char* mydigs[]={"one","two","three","four","five","six","seven","eight","nine"};

	int ismyd=0;
	int isMydigs(char* l, char* w[]);

	for(int i=0;(c=getchar())!=EOF;i++)
	{
		if(c>'0' && c<='9')
		{
			if(first==0)
				first=c-'0';
			else
				last=c-'0';
			cl=0;
		}
		else
		{
			line[cl++]=c;
			line[cl]='\0';
			if((ismyd=isMydigs(line, mydigs))!=0)
			{
				if(first==0)
					first=ismyd;
				else
					last=ismyd;

				ismyd=0;
				cl=0;
			}
		}
		if(c=='\n')
		{
			if(last==0)
				last=first;
			sum+=10*first+last;

			printf("Line: %i%i %i \n",first,last,sum);

			first=0;
			last=0;
			cl=0;
		}
	}

	printf("Sum= %i \n",sum);
}

int isMydigs(char* l, char* w[])
{
	int r=0;
	int j=0;
	int nomatch=0;

	while(l[j]!='\0')
	{	
		for(int lj=0;l[j+lj]!='\0';++lj)
		{
			for(int i=0;i<9 && r==0;++i)
			{
				for(int ini=0;l[j+lj+ini]!='\0' || w[i][ini]!='\0';++ini)
				{
					//if(i==7)
					//	printf("%c %c %i \n",l[j+lj+ini],w[i][ini],ini);

					if(l[j+lj+ini]!=w[i][ini])
					{
						nomatch=1;
						break;
					}
				}
				//printf("%s %i %s %i \n",&l[j+lj],i,w[i], nomatch);
				if(nomatch==0)
				{
					r=i+1;
					break;
				}
				nomatch=0;
			}
			if(r!=0)
				return r;
		}
		
		++j;		
	}

	return r;
}
