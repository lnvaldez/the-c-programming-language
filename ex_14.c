/* Exercise 1-14. Write a program to print a histogram 
of the frequencies of different characters in its input. */

#include <stdio.h>

#define SIZE 93 // ! = 33 to ~ = 126

int main()
{
	
	int c, i, start;
	int nchar[SIZE];
	
	start = 33;
	
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
			
			printf("%c: ", (i + start));
			for (int j = 0; j < nchar[i]; ++j)
			{
				printf("*");
			}
			printf(" (%d)\n", nchar[i]);
		}
	}

	return 0;
}

