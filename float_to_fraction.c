#include <stdio.h>
#include <math.h>
#define TOP 100000

void float_to_frac(double , int);

int main(void)
{
	double input;

	printf("Enter a floating-point number: ");
	scanf("%lf", &input);

	float_to_frac(input, TOP);

	return 0;
}

void float_to_frac(double input, int top)
{
	int m, n;
	int nume, deno;
	int value;
	int check;

	for (m = 1; m < top; m++)
	{
		check = 0;
		value = input * m;
		for (n = 0; n < m; n++)
		{
			if (fabs(value - n) < (1.0 / top))
			{
				check = 1;
				nume = n;
				break;
			}
		}
		if (1 == check)
		{
			deno = m;
			break;
		}
	}
	printf("%.10f = %d/%d\n", input, nume, deno);
}
