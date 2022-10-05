#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a, b, c, d, e, Total;

main()
{
	printf("(Car-Pool Saving Calculator)\n");
	printf("Please input under information\n");
	printf(" \n");

	printf("(a) Total miles driven per day: ");
	scanf_s("%d", &a);

	printf("(b) Cost per gallon of gasoline: ");
	scanf_s("%d", &b);

	printf("(c) Average miles per gallon: ");
	scanf_s("%d", &c);

	printf("(d) Parking fees per day: ");
	scanf_s("%d", &d);

	printf("(e) Tolls per day: ");
	scanf_s("%d", &e);

	Total = a + b + c + d + e;
	printf("You totally cost %d dollar a day\n", Total);


	return 0;
}