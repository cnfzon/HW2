#include <stdio.h>

int main()
{
	float hour, rate, num;
	while (1)
	{
		printf("Enter #of hours worked (-1 to end): ");
		scanf_s("%f", &hour);
		if (hour == -1) goto end;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (hour > 40) num = rate/2;
		printf("Salary is $%.2f\n\n", hour*rate+(hour-40)*num);
	}
end:
	return 0;
}