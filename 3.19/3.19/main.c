#include <stdio.h>

int main()
{
	float loan, rate, day, interest;
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &loan);
		if (loan == -1) goto end;
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &day);
			interest = loan * rate * day /365;
			printf("The interest charage is $%.2f\n\n", interest);
	}
  end:
	return 0;
}