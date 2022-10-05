#include <stdio.h>
#include <stdlib.h>

int a;
main()
{
	printf("Please input an integer : ");
	scanf_s("%d", &a);
	printf(" \n");
	if (a % 2 == 0)
	{
		printf("This number is even.\n");
	}
	else
	{
		printf("This number is odd.\n");
	}

	return 0;
}