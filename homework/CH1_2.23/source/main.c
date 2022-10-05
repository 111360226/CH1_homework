
#include <stdlib.h>
#include <stdio.h>

int a, b, c;

int main()
{

	printf("Please input three different integer:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf(" \n");
	if (a > b && a > c)
	{
		if (b > c)
		{
			printf("%d is the maximum number\n", a);
			printf("%d is the minimum number\n", c);
		}
		else
		{
			printf("%d is the maximum number\n", a);
			printf("%d is the minimum number\n", b);
		}
	}
	if (b > a && b > c)
	{
		if (a > c)
		{
			printf("%d is the maximum number\n", b);
			printf("%d is the minimum number\n", c);
		}
		else
		{
			printf("%d is the maximum number\n", b);
			printf("%d is the minimum number\n", a);
		}

	}
	if (c > a && c > b)
	{
		if (a > b)
		{
			printf("%d is the maximum number\n", c);
			printf("%d is the minimum number\n", b);
		}
		else
		{
			printf("%d is the maximum number\n", c);
			printf("%d is the minimum number\n", a);
		}
	}

	return 0;
}