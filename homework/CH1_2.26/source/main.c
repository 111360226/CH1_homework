#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a, b;

main()
{
	printf("Please input two integer : ");
	scanf_s("%d %d", &a, &b);
	printf(" \n");
	if (a%b == 0)
	{
		printf("The first number is a multiple of the second number.");
	}
	else
	{
		printf("The first number is not a multiple of the second number.\n");
	}
	return 0;
}