#include <stdio.h>

int main()
{
	int account;
	double  ma, hw_rate, hw_hour, cmw_sale, pw_piece, pw_price, salary;
	while (1)
	{
		salary = 0;
		printf("Enter type of employee's(1:Managers, 2:Hourly workers, 3:Commission workers, 4:Piece workers, 0:Exit): ");
		scanf_s("%d", &account);
		if (account == 0) goto end;
		if (account == 1)
		{
			printf("Enter weekly salary : ");
			scanf_s("%lf", &ma);
			printf("Managers weekly salary is %.2lf\n\n", ma);
		}
		if (account == 2)
		{
			printf("Enter hourly rate : ");
			scanf_s("%lf", &hw_rate);
			printf("Enter working hour per week : ");
			scanf_s("%lf", &hw_hour);
			if (hw_hour > 40) salary = hw_rate * hw_hour + hw_rate * 1.5 * (hw_hour - 40);
			else salary = hw_rate * hw_hour;
			printf("Hourly workers weekly salary is %.2lf\n\n", salary);
		}
		if (account == 3)
		{
			printf("Enter total weekly sales : ");
			scanf_s("%lf", &cmw_sale);
			salary = 250 + cmw_sale * 0.057;
			printf("Commission workers weekly salary is %.2lf\n\n", salary);
		}
		if (account == 4)
		{
			printf("Enter number of pieces produced per week : ");
			scanf_s("%lf", &pw_piece);
			printf("Enter price per product : ");
			scanf_s("%lf", &pw_price);
			salary = pw_piece * pw_price;
			printf("Piece workers weekly salary is %.2lf\n\n", salary);
		}
	}
	end:
	return 0;
}