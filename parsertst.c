#include<stdio.h>

int main()
{
	//game: id, reveals[]
	//reveal: colors[]

	int games[200][80][3];
	int game[80][3];
	int reveal[3]={0,0,0};

	char buff[80];
	char items[2][80];

	char c;
	int bc,ic,rc,gc=0; //counters

	int color=0;
	int inhead=1;
	int invalue=0;
	int valc=0;


	reveal[2]=reveal[1]=reveal[0]=0;

	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		{
			games[gc][rc][color]=valc;
			games[gc][rc++][0]=-1;
            valc=0;
            bc=0;

			++gc;
			rc=0;
			reveal[2]=reveal[1]=reveal[0]=0;
			inhead=1;
			continue;
		}
		if(c==' ')
		{
			if(invalue==1)
			{
				valc=buff[0]-'0';
				if(bc==2)
					valc+=10*(buff[1]);
				invalue=0;
				bc=0;
			}
			else
			{
				if(valc>0)
				{
					if(buff[0]=='r')
						color=0;
					else 
						if(buff[0]=='g')
							color=1;
						else
							color=2;
				bc=0;
				}
			}
			continue;
		}
		if(c==':')
		{
			inhead=0; //endhead();
			c=getchar(); //throw space after : away
			bc=0;
			continue;
		}
		if(c==',')
		{
			games[gc][rc][color]=valc;
			valc=0;
			bc=0;
			continue;
		}
		if(c==';')
		{
			++rc; //endreveal();
			bc=0;
		}
		else
		{
			if(invalue==1)
				buff[bc++]=c;
			else
				if(c>='0' && c<='9')
				{
					buff[bc++]=c;
					invalue=1;
				}
				else
					if(bc==0)
						buff[bc++]=c;
			printf("buff= %s \n",buff);
		}
	}

	for(int i;i<gc;++i)
	{
		printf("Game %i \n",i);
		for(int j=0;j<80;++j)
		{
			if(games[i][j][0]==-1)
				break;
			else
				printf("Reveal %i: %i R, %i G, %i B \n",j,games[i][j][0],games[i][j][1],games[i][j][2]);
		}
	}
}
