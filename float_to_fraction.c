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
	int nume, deno;
	int value;
	int check;

	for (deno = 1; deno < top; deno++)
	{
		check = 0;
		value = input * deno;
		for (nume = 0; nume < deno; nume++)
		{
			if (fabs(value - nume) < (1.0 / top))
			{
				check = 1;
				break;
			}
		}
		if (1 == check)
			break;
	}
	printf("%.10f = %d/%d\n", input, nume, deno);
}
