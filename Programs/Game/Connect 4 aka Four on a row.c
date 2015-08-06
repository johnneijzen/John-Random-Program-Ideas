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
	Display();
	
	return 0;
	
}
