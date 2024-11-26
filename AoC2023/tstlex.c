#include<stdio.h>

int main()
{
	char games[200][80][3][2][6] ; //200 games by 80 reveals by 3 items by 2 tokens by 6 chars
	int gc,rc,ic,tc,cc;
	gc=rc=ic=tc=cc=0;

	char c;

	int endgame=0;

	while((c=getchar())!=EOF)
	{
		switch(c) 
		{
			case ':':
				//header end
				//reveal start
				c=getchar(); //throw first ' ' away
				tc=cc=0;
				break; 
			case ' ':
				//token sep
				++tc;
				cc=0;
				break;
			case ',':
				//reveal item end
				c=getchar(); //throw first ' ' away
				++ic;
				tc=cc=0;
				break;
			case ';':
				//reveal end
				c=getchar(); //throw first ' ' away
				++rc;
				ic=tc=cc=0;
				break;
			case '\n':
				//game end
				++gc;
				rc=ic=tc=cc=0;
				break;
			default:
				//keep reading
				games[gc][rc][ic][tc][cc++]=c;
				break;
		}
	}

	for(int g=0;g<2;++g)
	{
		endgame=0;
		printf("Game %i \n",g+1);
		
		for(int r=0;r<8;++r)
		{
			if(endgame==1)
				break;
			printf("Rev %i: ",r+1);
			for(int i=0;i<3;++i)
			{
				if(i==0)
				{
					printf("c[0]= %i : ",games[g][r][i][0][0]);
					if(games[g][r][i][0][0]==0)
					{
						endgame=1;
						break;
					}
				}
				printf(" %s %s , ",games[g][r][i][0], games[g][r][i][1]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
