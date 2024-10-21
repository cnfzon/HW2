#include <stdio.h>

int main()
{
	int length, width, t, num;
	printf("Enter length: ");
	scanf_s("%d", &width);
	printf("Enter width: ");
	scanf_s("%d", &length);
	num = width-2;

	for (t = 0; t < length; t++) printf("*");
	printf("\n");
	while (1)
	{
		for (t = 0; t < length; t++)
		{
			if (t==0 || t==length-1) printf("*");
			else printf(" ");
		}
		printf("\n");
		num -= 1;
		if (num <= 0) goto end;
	}
end:
for (t = 0; t < length; t++) printf("*");
printf("\n\n");
	return 0;
}