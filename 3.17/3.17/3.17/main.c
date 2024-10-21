#include <stdio.h>

int main()
{
	int account;
	float beg_bal, cha, credit, lim;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &account);
		if (account != -1)
		{
			printf("Enter beginning balance: ");
			scanf_s("%f", &beg_bal);
			printf("Enter total charges: ");
			scanf_s("%f", &cha);
			printf("Enter total credits: ");
			scanf_s("%f", &credit);
			printf("Enter total limits: ");
			scanf_s("%f", &lim);
			if (lim < beg_bal + credit)
			{
				printf("Account:       %d\nCredits limit: %.2f\nBalance:       %.2f\n", account, lim, beg_bal + credit);
				printf("Credits limit Exceeded.\n\n");
			}
			else  printf("\n");
		}
		else
			goto end;
	}
	end:
	return 0;
}