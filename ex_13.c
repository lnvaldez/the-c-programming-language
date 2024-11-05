/* Exercise 1-13. Write a program to print a histogram 
of the lengths of words in its input. It is easy to draw the 
histogram with the bars horizontal; a vertical orientation is more challenging. */

/* Horizontal orientation */

#include <stdio.h>

int main()
{
	int c;
	
	while((c = getchar()) != EOF )
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			printf("\n");
		}
		else
		{
			printf("*", c);
		}
		
	}
	
	return 0;
}