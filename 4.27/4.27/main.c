#include <stdio.h>

int main()
{
	int x, y, z;
	for (x = 1; x <= 500; x++)
		for (y = 1; y <= 500; y++)
			for (z = 1; z <= 500; z++)
				if(z*z == x*x+y*y) printf("%d %d %d\n", x, y, z);
	return 0;
}