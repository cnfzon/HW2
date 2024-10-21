#include <stdio.h>

int main()
{
	float salary,num=0;
	while (1)
	{
		printf("Enter sales dollars (-1 to end): ");
		scanf_s("%f", &salary);
		if (salary != -1)
		{
			num = salary*0.09+200;
			printf("Salary is: $%.2f\n\n", num);
		}
		else goto end;
	}
	end:
	return 0;
}