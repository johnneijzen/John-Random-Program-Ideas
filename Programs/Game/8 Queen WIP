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
#include <stdlib.h>
#define N 8 // Change This Depending on board size you want.

int displayGird[N][N] = {0};

void display();
void solve(int firstQueenRow, int FirstQueenCol);
int checker(queenPos); //TODO

struct QueenPos{
  int posRow;
  int posCol;
  struct link *next;
};

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

void solve(int firstQueenRow, int FirstQueenCol)
{

}

int checker(queenPos) //TODO
{
    /*
        There are 3 ways queen can atk
        same row,same col, or diagonal

        to solve this we use 3 equations
        for row: R of queen 1 == R of queen 2
        for col: C of queen 1 == C of queen 2
        and diagonal: |R1-R2| == |C1-C2|
    */

    int row,col; //TODO
    //x = QueenPos->posRow
    //y = QueenPos->posCol

    // Check Row and CoL
    for(ctr=0;ctr<N;i++)
    {
        if((displayGird[row][ctr]='Q')||(displayGird[ctr][col]='Q')
           return 1;
    }
    
    // Check Diagonal



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
