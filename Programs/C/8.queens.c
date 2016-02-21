/*
    @author:    John V. Neijzen
    @activity:  Queen (8 x 8)
    @section:   CSA 12 A
    @version:   0.1
    @Change-logs:
        0.01 - First Draft
*/

/*

*/

#include <stdio.h>
#define N 8 // Change This Depending on board size you want.

int displayGird[N][N] = {0};

void display();
int Solve(int firstQueenRow, int FirstQueenCol);

void main()
{
    int row, col;
    printf("Input First Queen Row(1-%d): ", N);
    scanf("%d", &row);
    printf("Input First Queen Col(1-%d): ", N);
    scanf("%d", &col);
    row = row - 1;
    col = col - 1;

    displayGird[row][col] = 'Q';
    solve(row,col);

    display();
}

int Solve(int firstQueenRow, int FirstQueenCol)
{

}

void display()
{
    int i = 0,j = 0;

    for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
		    if(displayGird[i][j] != 81)
                printf("%d ", displayGird[i][j]);
            else
                printf("%c ", displayGird[i][j]);
		}
		printf("\n");
	}
}
