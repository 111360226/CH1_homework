#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a, b, c, i;

main()
{
	printf("number\tsquare\tcube\t\n");
	for (i = 0; i <= 10; i++)
	{
		a = i;
		b = a * a;
		c = b * a;
		printf("%d\t%d\t%d\t\n", a, b, c);
	}
	return 0;
}