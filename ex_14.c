/* Exercise 1-14. Write a program to print a histogram 
of the frequencies of different characters in its input. */

#include <stdio.h>

#define SIZE 93 // ! = 33 to ~ = 126

int main()
{
	
	int c, i;
	int nchar[SIZE]; // Array of size 93
	
	for (i = 0; i < SIZE; ++i)
	{
		nchar[i] = 0; // Each element starts at count 0
	}

	/*
		If the character is one between '!' and '~',
		increase it's index value count by one. 
		The index position equals it's value minus '!' (33).
		e.g. 'a' (97) - '!' (33) will have an index value of 64
	*/
	
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
			
			printf("%c: ", (i + '!'));
			for (int j = 0; j < nchar[i]; ++j)
			{
				printf("*");
			}
			printf(" (%d)\n", nchar[i]);
		}
	}

	return 0;
}

