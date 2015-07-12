#include <stdio.h>
#include <windows.h>

int main()
{
	//Variables For User Amount Entered
	int UserPeso1000Bill = 0;
	int UserPeso500Bill = 0;
	int UserPeso100Bill = 0;
	int UserPeso10Coin = 0;
	int UserPeso5Coin = 0;
	int UserPeso1Coin = 0;
	int UserTotalAmount = 0;

	//Asking User For Amount
	printf("Enter number of 1000PHP bills: ");
	scanf("%d", &UserPeso1000Bill);
	printf("Enter number of 500PHP bills: ");
	scanf("%d", &UserPeso500Bill);
	printf("Enter number of 100PHP bills: ");
	scanf("%d", &UserPeso100Bill);
	printf("Enter number of 10PHP Coins: ");
	scanf("%d", &UserPeso10Coin);
	printf("Enter number of 5PHP Coins: ");
	scanf("%d", &UserPeso5Coin);
	printf("Enter number of 1PHP Coins: ");
	scanf("%d", &UserPeso1Coin);
	UserTotalAmount = (UserPeso1000Bill * 1000) + (UserPeso500Bill * 500) + (UserPeso100Bill * 100) + (UserPeso10Coin * 10) + (UserPeso5Coin * 5) + (UserPeso1Coin * 1);
	printf("User Total Amount: %d", UserTotalAmount);

	// User Enter Amount
	int UserAmount = 0;

	printf("\nEnter amount to be withdrawn: ");
	scanf("%d", &UserAmount);

	// Rushed Fix
	int FixedUserAmount = UserAmount;

	// Coin Changing Program
	int Peso1000Bill = 0;
	int Peso500Bill = 0;
	int Peso100Bill = 0;
	int Peso10Coin = 0;
	int Peso5Coin = 0;
	int Peso1Coin = 0;

	// Checking if Amount to withdrawn is not > Amount that he has
	if (UserAmount > UserTotalAmount)
	{
		printf("Sorry, but your transaction is invalid");
	}
	else
	{
		if (UserAmount >= 1000)
		{
			Peso1000Bill = UserAmount / 1000;
			UserAmount = UserAmount % 1000;
        }

		if (UserAmount >= 500)
		{
			Peso500Bill = UserAmount / 500;
			UserAmount = UserAmount % 500;
		}

		if (UserAmount >= 100)
		{
			Peso100Bill = UserAmount / 100;
			UserAmount = UserAmount % 100;
		}

		if (UserAmount >= 10)
		{
			Peso10Coin = UserAmount / 10;
			UserAmount = UserAmount % 10;
		}

		if (UserAmount >= 5)
		{
			Peso5Coin = UserAmount / 5;
			UserAmount = UserAmount % 5;
		}

		if (UserAmount >= 1)
		{
			Peso1Coin = UserAmount / 1;
			UserAmount = UserAmount % 1;
		}

        while(Peso1000Bill > UserPeso1000Bill)
        {
            Peso500Bill = Peso500Bill + 2;
            Peso1000Bill = Peso1000Bill - 1;
        }

        while(Peso500Bill > UserPeso500Bill)
        {
            Peso100Bill = Peso100Bill + 5;
            Peso500Bill = Peso500Bill - 1;
        }

        while(Peso100Bill > UserPeso100Bill)
        {
            Peso10Coin = Peso10Coin + 10;
            Peso100Bill = Peso100Bill - 1;
        }

        while(Peso10Coin > UserPeso10Coin)
        {
            Peso5Coin = Peso5Coin + 2;
            Peso10Coin = Peso10Coin - 1;
        }

        while(Peso5Coin > UserPeso5Coin)
        {
            Peso1Coin = Peso1Coin + 5;
            Peso5Coin = Peso5Coin - 1;
        }

        while(Peso1Coin > UserPeso1Coin)
        {
            printf("Sorry Sir Cant Be Done With Amount You Give");
            getch();
            return 0;
        }

    printf("You will receive: \n");
    printf("1000 Peso Bill: %d\n", Peso1000Bill);
    printf("500 Peso Bill: %d\n", Peso500Bill);
    printf("100 Peso Bill: %d\n", Peso100Bill);
    printf("10 Peso Bill: %d\n", Peso10Coin);
    printf("5 Peso Bill: %d\n", Peso5Coin);
    printf("1 Peso Bill: %d\n", Peso1Coin);
    getch();
    }
    return 0;
}

