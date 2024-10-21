#include <stdio.h>
#include <math.h>

int main()
{
	int t, count,count_2;
	printf("(A)\n");
	for (t = 0; t < 10; t++)
	{
		for (count = 0; count < t + 1; count++) printf("*");
		printf("\n");
	}
	printf("\n(B)\n");
	for (t = 0; t < 10; t++)
	{
		for (count = 10; count > t; count--)  printf("*");
		printf("\n");
	}
	printf("\n(C)\n");
	for (t = 0; t < 10; t++)
	{
		for (count = 1; count < t + 1; count++) printf(" ");
		for (count = 10; count > t; count--)    printf("*");
		printf("\n");
	}
	printf("\n(D)\n");
	for (t = 0; t < 10; t++)
	{
		for (count = 9; count > t; count--)     printf(" ");
		for (count = 0; count < t + 1; count++) printf("*");
		printf("\n");
	}
	return 0;
}