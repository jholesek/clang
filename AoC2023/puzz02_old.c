// Determine which games would have been possible if the bag had been loaded with only 12 red cubes, 13 green cubes, and 14 blue cubes. 
// What is the sum of the IDs of those games?

int main()
{
	//parse the line
	//check values for every reveal (separated by an ';')
	//if values are not possible, discard the game
	//otherwise proceed with the reveals
	//if all reveals are possible, add game id to the sum

	char c;
	int innewgame=0;
	int tmp[3]={0,0,0};
	int ctmp=0; //count of tmp elements
	int gameid=0;
	int tmpcol[6]={'\0','\0','\0','\0','\0','\0'};
	int cc=0; //count of chars in tmpcol
	int stev; //num of cubes

	innewgame=1;

	while((c=getchar())!=EOF)
	{
		if(innewgame==1)
		{
			innewgame=0;
			gameid=0;
			//skip 4, to game id
			for(int i=0;(c=getchar()) && i<4;++i)
				;
			//next are id, to the ':'
			ctmp=0;

			for(int i=0;(c=getchar())!=':';++i)
			{
				tmp[i]=c-'0';
				ctmp=i;
			}
			//get game id
			gameid=tmp[2]*100+tmp[1]*10+tmp[0];
			
			//read a reveal
			ctmp=0;
			cc=0;
			tmp={0,0,0};
			stev=0;
			tmpcol[0]='\0';

			while((c=getchar())!=';')
			{
				if(c=='\n')
				{
					innewgame=1;
					break;
				}
				if(c==' ')
				{
					if(ctmp>0 && cc>0)
					{
						if(tmpcol[0]='r')
							color=0;
						else 
							if(tmpcol[0]='g'
								color=1;
							else
								color=2;
						rev[color]=stev;
						stev=0;
						ctmp=0;
						cc=0;
						tmpcol[0]='\0';
						tmp[2]=tmp[1]=tmp[0]=0;
					}
					continue;
				}
				if(c>='0' && c<='9')
					tmp[ctmp++]=c-'0';
				else
				{
					ctmp=0;
					stev=tmp[2]*100+tmp[1]*10+tmp[0];
					tmpcol[cc++]=c;
				}
			}

		}
	}
}
