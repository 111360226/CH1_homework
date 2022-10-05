#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{

	int i, j;

	for (i = 1; i <= 5; i = i + 1)
	{
		for (j = 1; j <= 5 - i; j = j + 1)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j = j + 1)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}