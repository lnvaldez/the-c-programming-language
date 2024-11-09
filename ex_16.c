#include <stdio.h> 

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max) 
		{
			max = len;
			copy(longest, line);
		}
	}
	
	if (max > 0)
	{
		printf("The length of the string was %d\n", max);
		printf("%s", longest);
	}
	
	return 0;
}

int getline(char s[], int lim)
{
	int c, i, length;
	
	length = 0;
	
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (i < lim - 1)
		{
			s[i] = c;
		}
		length++;
	}
	
	if (c == '\n')
	{
		if (i < lim - 1)
		{
			s[i] = c;
			++i;				
		}
		length++;
	}
	
	s[i < lim - 1 ? i : lim - 1] = '\0';
	return length;
	
}

void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	
	while ((to[i] = from[i]) != '\0')
		++i;
}