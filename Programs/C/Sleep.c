#include <stdio.h>
#include <windows.h>

void main()
{
	int a = 0;
	int gameOn = 1;
	
	while(gameOn == 1)
	{
		system("cls");
		printf("%d", a);
		Sleep(1000);
		a = a + 1;
		if (a == 60)
		{
			printf("Game Over");
			gameOn = 0;
		}
	}
}
