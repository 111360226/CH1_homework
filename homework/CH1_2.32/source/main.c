#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float a, b, BMI;

main()
{
	printf("Please input your height(m) :");
	scanf_s("%f", &a);
	printf("Please input your weight(kg) :");
	scanf_s("%f", &b);
	printf(" \n");

	BMI = b / (a*a);
	printf("Your BMI is : %f\n", BMI);



	if (BMI < 18.5)
	{
		printf("You are underweight.");
	}
	else if (BMI >= 18.5 || BMI <= 24.9)
	{
		printf("You are Normal.");
	}
	else if (BMI > 24.9 || BMI <= 29.9)
	{
		printf("You are underweight.");
	}
	if (BMI >= 30)
	{
		printf("You are Obese.");
	}



	return 0;
}