#include <stdio.h>
#include <windows.h>

int main()
{
  // User Enter Amount
  int UserAmount = 0;

  printf("\nEnter amount to be converting into Coin and Bills: ");
  scanf("%d", &UserAmount);

  // Coin/Bills Changing Program
  int Peso1000Bill = 0;
  int Peso500Bill = 0;
  int Peso100Bill = 0;
  int Peso10Coin = 0;
  int Peso5Coin = 0;
  int Peso1Coin = 0;

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

  printf("You will receive: \n");
  printf("1000 Peso Bill: %d\n", Peso1000Bill);
  printf("500 Peso Bill: %d\n", Peso500Bill);
  printf("100 Peso Bill: %d\n", Peso100Bill);
  printf("10 Peso Bill: %d\n", Peso10Coin);
  printf("5 Peso Bill: %d\n", Peso5Coin);
  printf("1 Peso Bill: %d\n", Peso1Coin);
  getch();

  return 0;
}

