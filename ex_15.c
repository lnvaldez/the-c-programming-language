/* Exercise 1.15. Rewrite the temperature conversion 
program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

// Scale is your desired scale output format
float temperature_conversion(char scale, float degree)
{
	float ans;
	
	if (scale == 'f') 
	{
		ans = (degree * 9.0 / 5.0) + 32.0;
	}
	else
	{
		ans = 5.0 * (degree - 32.0) / 9.0;
	}

	return ans;
}

int main()
{
	
	char scale;
	float degree, ans;
	
	printf("Convert to fahrenheit (f) or celsius (c)?\n");
	scanf("%c", &scale);
	
	if (scale != 'f' || scale != 'c')
	{
		printf("Choose 'f' or 'c'\n");
		return 0;
	}
	
	printf("Enter degree to convert\n");
	scanf("%f", &degree);
	
	ans = temperature_conversion(scale, degree);
	
	if (scale == 'f')
	{
		printf("%.1f C = %.1f C", degree, ans);
	}
	else
	{
		printf("%.1f C = %.1f C", degree, ans);
	}

	
	return 0;
	
}