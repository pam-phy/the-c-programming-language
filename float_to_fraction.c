#include <stdio.h>
#include <math.h>
#define TOP 100000

int main(void)
{
	double input, test;
	int nume, deno;
	int check;
	int m, n;

	printf("Enter a floating-point number: ");
	scanf("%lf", &input);

	for (m = 1; m < TOP; m++)
	{
		check = 0;
		test = input * m;
		for (n = 1; n < m; n++)
		{
			if (fabs(test - n) < (1.0 / TOP))
			{
				check = 1;
				nume = n;	// numerator
				break;
			}
		}
		if (1 == check)
		{
			deno = m;		// denominator
			break;
		}
	}

	printf("%f = %d/%d\n", input, n, m);

	return 0;
}
