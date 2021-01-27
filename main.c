#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//aaadad
int main()
{
	double a;
	double b;
	char operand;
	//First
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
	else if(operand == '/')
	{
		printf("%f", a / b);
	}

	return 0;
}
