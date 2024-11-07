/* Exercise 1-14. Write a program to print a histogram 
of the frequencies of different characters in its input. */

#include <stdio.h>

#define SIZE 93 // ! = 33 to ~ = 126

int main()
{
	
	int c, i;
	int nchar[SIZE];
	
	
	for (i = 0; i < SIZE; ++i)
	{
		nchar[i] = 0;
	}
	
	while((c = getchar()) != EOF)
	{
		if (c >= '!' && c <= '~')
		{
			++nchar[c - '!'];
		}
	}
	
	for (i = 0; i < SIZE; ++i)
	{
		if (nchar[i] != 0)
		{
			
			printf("%c", i);
		}
	}

	return 0;
}

