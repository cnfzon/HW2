#include <stdio.h>
#include <math.h>

int main()
{
	int t,k;
	float num,rate=0.1,rate_2;

	for (k = 0; k < 5; k++)
	{
		printf("½Æ§Q : %.1f%%\n", rate*100);
		//rate_2 = 
		for (t = 1; t < 16; t++)
		{
			printf("²Ä%2d¦~  %.2f\n", t, 5000 * pow((1 + rate), t));
		}
		printf("\n\n");
		rate += 0.005;
	}
	return 0;
}