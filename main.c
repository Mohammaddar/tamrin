#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double a;
	double b;
	char operand;

	printf("Please insert your operation...");

	scanf("%lf %c %lf", &a, &operand, &b);

	if (operand == '+')
	{
		printf("%f", a + b);
	}
	else if(operand == '-')
	{
		printf("%f", a - b);
	}
	else if(operand == '*')
	{
		printf("%f", a * b);
	}
	//app
	//app
	else if(operand == '/')
	{
		printf("%f", a / b);
	}

	return 0;
}
