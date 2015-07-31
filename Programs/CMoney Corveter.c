#include <stdio.h>

int main()
{
	//PHP Value To Other CURRENCY
	float PHPToUSD = 0.02265;
	float PHPToJPY = 2.43877;
	float PHPToEUR = 0.01443;
	float CorvertedAmount = 0;
	//User PHP Value
	float PHPAmount = 0;
	printf("Enter Amount You Want Corvert: ");
	scanf("%f", &PHPAmount);
	//User Input to Corvert to what Currency
	int CurrencyCorvert = 0;
	printf("\nWhat Type Currency You Want To Corvert");
	printf("\n1 = USD, 2 = JPY, 3 = EUR. : ");
	scanf("%d", &CurrencyCorvert);
	
	switch(CurrencyCorvert)
	{
		case 1: // PHPToUSD
			CorvertedAmount = PHPAmount * PHPToUSD;
			printf("\nTotal Amount in USD:%f", CorvertedAmount);
			break;
		case 2: // PHPToJPY
			CorvertedAmount = PHPAmount * PHPToJPY;
			printf("\nTotal Amount in JPY:%f", CorvertedAmount);
			break;
		case 3: // PHPToEUR
			CorvertedAmount = PHPAmount * PHPToEUR;
			printf("\nTotal Amount in EUR:%f", CorvertedAmount);
			break;
		default:
			printf("\nInvaid Input");
			break;
	}
	
	return 0;
}
