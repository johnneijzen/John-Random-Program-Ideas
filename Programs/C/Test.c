#include <stdio.h>
#include <windows.h>

int main()
{
	int UserNumber = 0;
	int I = 0; // I = 1
	int ISubtract = 0;
	int V = 0; // V = 5
	int VSubtract = 0;
	int X = 0; // X = 10
	int XSubtract = 0; 
	int L = 0; // L = 50
	int LSubtract = 0; 
	int C = 0; // C = 100
	int CSubtract = 0; 
	int D = 0; // D = 500
	int DSubtract = 0; 
	int M = 0; // M = 1000
	int DSubtract = 0; 
	
	printf("Enter Your Number: ");
	scanf("%d", &UserNumber);
	
	while (UserNumber != 0)
	{
		while (UserNumber >= 1000)
		{
			if (M < 3)
			{
				UserNumber = UserNumber - 1000;
				M = M + 1;
			}
			else
			{
				break;
			}
		}	
		while (UserNumber >= 500)	
		{
			if (D < 3)
			{
				UserNumber = UserNumber - 500;
				D = D + 1;
			}
			else
			{
				break;
			}
		}
		while (UserNumber >= 100)	
		{
			if (C < 3)
			{
				UserNumber = UserNumber - 100;
				C = C + 1;
			}
			else
			{
				break;
			}
		}
		while (UserNumber >= 50)	
		{
			if (L < 3)
			{
				UserNumber = UserNumber - 50;
				L = L + 1;
			}
			else
			{
				break;
			}
		}
		while (UserNumber >= 10)	
		{
			if (X < 3)
			{
				UserNumber = UserNumber - 10;
				X = X + 1;
			}
			else
			{
				break;
			}
		}
		while (UserNumber >= 5)	
		{
			if (V < 3)
			{
				UserNumber = UserNumber - 5;
				V = V + 1;
			}
			else
			{
				break;
			}
		}
		while (UserNumber >= 1)	
		{
			if (I < 3)
			{
				UserNumber = UserNumber - 1;
				I = I + 1;
			}
			else
			{
				V;
			}
		}
	}
	
	while (M > 0)
	{
		printf("M");
		M = M - 1;
	}
	
	while (D > 0)
	{
		printf("D");
		D = D - 1;
	}
	
	while (C > 0)
	{
		printf("C");
		C = C - 1;
	}
	
	while (L > 0)
	{
		printf("L");
		L = L - 1;
	}
	
	while (X > 0)
	{
		printf("X");
		X = X - 1;
	}
	
	while (V > 0)
	{
		printf("V");
		V = V - 1;
	}
	
	while (I > 0)
	{
		printf("I");
		I = I - 1;
	}
	
}
			
