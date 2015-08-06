#include <stdio.h>

// Display Code
int Display()
{
	// Display Output
	char display[6][7] = {
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0
	};
	
	// Display Print Out
	int i,j;
	for(i = 0; i < 6; i++) 
	{
		for(j = 0; j < 7; j++) 
		{
			printf("%d ", display[i][j]);
		}
		printf("\n");
	}
}

// Main Code
int main()
{
	int Player = 1;
	
	printf("top of grid is coording");
	printf("\n1 2 3 4 5 6 7\n");
	Display();
	if(Player == 1) 
		printf("Player 1 (1) Turn");
	if(Player == 2) 
		printf("Player 2 (2) Turn");
	
	return 0;
	
}
