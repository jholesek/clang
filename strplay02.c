#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char c;
	char line[80];
	int stv[80];
	int cstv=0; //st stevk
	int cc=0; //char count
	char* stevke[]={"ena","dva","tri"};
	int js=0; //je stevka

	int jeStevka(char* l, char* s[]);

	while((c=getchar())!=EOF)
	{
		//line[cc++]=c;
		if(c=='\n')
		{
			for(int i=0;i<cstv;++i)
			{
				printf("Stevke = %i ",stv[i]);
			}
			printf("\n");
			cc=0; //reset count
			cstv=0; //reset st stevk
		}
		else 
		{
			if(isdigit(c))
			{
				stv[cstv++]=c-'0';
				cc=0;
			}
			else
			{
				line[cc++]=c;
				line[cc+1]='\0';
				printf("curr line = %s %i \n", line,cc);
				if((js=jeStevka(line,stevke))!=0)
				{
					printf("js = %i \n",js);
					stv[cstv++]=js;
					js=0;
					cc=0; //reset
				}
			}
		}
	}
}

int jeStevka(char* l, char* s[])
{
	int r=0;

	//printf("jeS %s \n",l);

	for(int i=0;i<3;++i)
	{
		if(strcmp(l,s[i])==0)
			r=i+1;
		//printf("r= %i \n", r);
	}
	

	return r;

}

