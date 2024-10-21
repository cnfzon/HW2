#include <stdio.h>

int main()
{
	int t, k;
	for (t = 0; t < 9; t++)
	{
		if (t < 4)
		{
			for (k = 4; k > t; k--) printf(" ");
			for (k = 0; k < t + 1; k++) printf("*");
			if (t > 0) for (k = 1; k < t + 1; k++) printf("*");
		}
		else if (t > 4)
		{
			for (k = 1; k < t - 3; k++) printf(" ");
			for (k = 4; k > t - 5; k--) printf("*");
			for (k = 8; k > t; k--)     printf("*");
		}
		else 
			for (k = 0; k < 9; k++) printf("*");
		printf("\n");
	}
	return 0;
}