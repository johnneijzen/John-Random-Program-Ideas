#include <stdio.h>
#include <windows.h>

int main()
{
	int UserNumber = 0;
	int I = 0; // I = 1
	int PreI = 0; // IV
	int V = 0; // V = 5
	int PreV = 0; // Means IX
	int X = 0; // X = 10
	int PreX = 0; // Means XL
	int L = 0; // L = 50
	int PreL = 0; // Means XC
	int C = 0; // C = 100
	int PreC = 0; // Mean LD
	int D = 0; // D = 500
	int PreD = 0; // Means CM
	int M = 0; // M = 1000

	printf("Enter Your Number: ");
	scanf("%d", &UserNumber);

	while (UserNumber != 0)
	{
		if (UserNumber >= 1000)
		{
			M = UserNumber / 1000;
			UserNumber = UserNumber % 1000;
		}
		else if (UserNumber >= 500)
		{
		    if (UserNumber < 900)
            {
                D = UserNumber / 500;
                UserNumber = UserNumber % 500;
            }
            else
            {
                PreD = PreD + 1;
                UserNumber = UserNumber - 900;
            }
		}
		else if (UserNumber >= 100)
		{
			if (UserNumber < 400)
            {
                C = UserNumber / 100;
                UserNumber = UserNumber % 100;
            }
			else
            {
                PreC = PreC + 1;
                UserNumber = UserNumber - 400;
            }

		}
        else if (UserNumber >= 50)
		{
		    if (UserNumber < 90)
            {
                L = UserNumber / 50;
                UserNumber = UserNumber % 50;
            }
            else
            {
                PreL = PreL + 1;
                UserNumber = UserNumber - 90;
            }
		}
		else if (UserNumber >= 10)
		{
		    if (UserNumber < 40)
            {
                X = UserNumber / 10;
                UserNumber = UserNumber % 10;
            }
            else
            {
                PreX = PreX + 1;
                UserNumber = UserNumber - 40;
            }

		}
		else if (UserNumber >= 5)
		{
		    if (UserNumber < 9)
            {
                V = UserNumber / 5;
                UserNumber = UserNumber % 5;
            }
			else
            {
                PreV = PreV + 1;
                UserNumber = UserNumber - 9;
            }
		}
		else if (UserNumber >= 1)
		{
		    if (UserNumber < 4)
            {
                I = UserNumber / 1;
                UserNumber = UserNumber % 1;
            }
            else
            {
                PreI = PreI + 1;
                UserNumber = UserNumber - 4;
            }
		}
	}

    while (M > 0)
    {
        printf("M");
        M = M - 1;
    }

    while (PreD > 0)
	{
		printf("CM");
		PreD = PreD - 1;
	}

	while (D > 0)
	{
		printf("D");
		D = D - 1;
	}

    while (PreC > 0)
	{
		printf("LD");
		PreC = PreC - 1;
	}

	while (C > 0)
	{
		printf("C");
		C = C - 1;
	}

    while (PreL > 0)
	{
		printf("XC");
		PreL = PreL - 1;
	}

	while (L > 0)
	{
		printf("L");
		L = L - 1;
	}

    while (PreX > 0)
	{
		printf("XL");
		PreX = PreX - 1;
	}

	while (X > 0)
	{
		printf("X");
		X = X - 1;
	}

    while (PreV > 0)
	{
		printf("IX");
		PreV = PreV - 1;
	}

	while (V > 0)
	{
		printf("V");
		V = V - 1;
	}

    while (PreI > 0)
	{
		printf("IV");
		PreI = PreI - 1;
	}

	while (I > 0)
	{
		printf("I");
		I = I - 1;
	}
}
