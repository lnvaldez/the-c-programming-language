/* Exercise 1-13. Write a program to print a histogram 
of the lengths of words in its input. It is easy to draw the 
histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>
#include <stdlib.h>

void vertical_histogram()
{
	int* ptr;
	int c, i, size;
	
	// Define length of array
	size = 5;
	
	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			ptr[i] = size;
			size = 0;
		}
		else
		{
			++size;
		}
	}
	
	ptr = (int*)malloc(size * sizeof(int));
	
	for (int j = 0; j < size; ++j)
	{
		ptr[j] = j + 1;
	}
	
}

/* Horizontal orientation */

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
	
	vertical_histogram();
	
	return 0;
}

/* Vertical orientation */

