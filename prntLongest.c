#include <stdio.h>
#define MAXLINE 1000	/* maxline input line size */

int getln(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max=0;
	while((len = getln(line, MAXLINE))>0)
		if(len>max) {
			max=len;
			copy(longest , line);
			}
	if(max>0)
		printf("Longest line: %s", longest);

	return 0;
	
}

int getln(char s[], int lim) {
	int c,i;

	for(i=0;i<lim-1 && (c=getchar()) != EOF && c!='\n';++i)
		s[i]=c;

	if(c=='\n') {
		s[i]=c;
		++i;
	}

	s[i]='\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i=0;
	//while((to[i]=from[i]) != '\0')
		//++i;
	for(i=0;(to[i]=from[i])!='\0';++i)
		;


}

