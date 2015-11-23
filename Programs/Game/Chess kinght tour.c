#include <stdio.h>

int displayGird[8][8] = {0};

void display();
void move(int count,int x,int y);

void main()
{
	int col = 0;
	int row = 0;
	int count = 0;
	
	printf("\nStarting Postion");
	printf("\nCol: ");
	scanf("%d", &col);
	printf("\nRow: ");
	scanf("%d", &row);
	
	displayGird[col - 1][row - 1] = 1;
	
	while(count < 8 * 8)
	{
		display();
		move(count ,col, row);
		count++;
	}
}

void move(int count,int x,int y)
{
	if
}

void display()
{
	int i,j;
	int Char = 65;
	printf("  ");
	for(i = 0; i < 8; i++)
	{
		printf("%c ", Char);
		Char = Char + 1;
	}
	printf("\n");
	for(i = 0; i < 8; i++)
	{
		printf("%d ", i+1);
		for(j = 0; j < 8; j++)
		{
			printf("%d ", displayGird[i][j]);
		}
		printf("\n");
	}
}
