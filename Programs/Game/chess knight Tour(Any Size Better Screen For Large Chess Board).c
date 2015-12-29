/*
    @author:    John V. Neijzen
    @activity:  Chess Knight Tour (Any Size)
    @section:   CSA 12 A
    @version:   0.8
    @Change-logs:
        0.01 - First Draft
        0.02 - 3 Days of Debugging
        0.03 - About give up
        0.04 - Check Net for fix
        0.05 - Fig-out what is wrong
        0.06 - Tested on some sizes
        0.07 - Improve Display Bit.
        0.08 - Increase Speed By Change Display() to run only at Start and at end.
*/

/*
    Create a C program that solve Chess Knight Tour with one user input,
*/

#include <stdio.h>

#define N 35 // Change This Depending on board size you want.

int displayGird[N][N] = {0};
int count = 1;
int row = 0;
int col = 0;

void solve();
void display();
int isMovePossible(int nextRow, int nextCol);
int nextMaxPossibleMoves(int nextRow, int nextCol);

void main()
{
    printf("This Program Will Solve Knight Tour");
	printf("\nStarting Postion");
	do
    {
        printf("\nRow(1-%d): ",N);
        scanf("%d", &row);
        if(row<1||row>N)
            printf("Invalid Try Aging");
    }while(row<1||row>N);

    do
    {
        printf("\nCol(1-%d): ",N);
        scanf("%d", &col);
        if(col<1||col>N)
            printf("Invalid Try Aging");
    }while(col<1||col>N);

    row = row - 1;
    col = col - 1;

    displayGird[row][col] = count;
    display();

    while(count <= N*N)
	{
		count++;
		solve();
	}

	display();
}

void solve()
{
    int rowPattern[8]={2,1,-2,-1,1,-1,2,-2};
    int colPattern[8]={1,2,-1,-2,-2,2,-1,1};
    int maxMoves[8];
    int moves = 0;
    int isMovePossibles = 0;

    int nextRow = 0;
    int nextCol = 0;
    int i;
    //Next Move Test
    for (i = 0; i < 8; i++) {
        moves = 0;
        nextRow = row + rowPattern[i];
        nextCol = col + colPattern[i];
        //Check Move is Possible
        isMovePossibles = isMovePossible(nextRow,nextCol);
        if (isMovePossibles == 1)
        {
            //Check Numbers Of Moves
            moves = nextMaxPossibleMoves(nextRow, nextCol);
            maxMoves[i] = moves;
        }
        else
        {
            maxMoves[i] = -1;
        }
    }

    int smallest = 8;
    int smallestElement = 0;
    for (i = 0; i < 8; i++)
    {
        if(maxMoves[i] != -1)
        {
            if (maxMoves[i] < smallest)
            {
                smallest = maxMoves[i];
                smallestElement = i;
            }
        }
    }
    // Time For Move
    row = row + rowPattern[smallestElement];
    col = col + colPattern[smallestElement];
    displayGird[row][col] = count;
}

int isMovePossible(int nextRow, int nextCol) {
    if ((nextRow >= 0 && nextRow < N) && (nextCol >= 0 && nextCol < N) && (displayGird[nextRow][nextCol] == 0))
        return 1;
    else
        return 0;
}

int nextMaxPossibleMoves(int nextRow, int nextCol)
{
    int rowPattern[8]={2,1,-2,-1,1,-1,2,-2};
    int colPattern[8]={1,2,-1,-2,-2,2,-1,1};
    int moves=0;
    int i;

    int nextPossibleRow=0;
    int nextPossibleCol=0;

    for (i = 0; i < 8; i++)
    {
        nextPossibleRow = nextRow + rowPattern[i];
        nextPossibleCol = nextCol + colPattern[i];
        if ((nextPossibleRow  >= 0 && nextPossibleRow < N) && (nextPossibleCol >= 0 && nextPossibleCol < N) && (displayGird[nextPossibleRow][nextPossibleCol] == 0))
            moves++;
    }
    return moves;
}

void display()
{
	int i = 0,j = 0;
	printf("        ");
	for(i = 0; i < N; i++)
	{
	    if(i+1 < 10)
	    {
	        if(i+1 != 9)
                printf("%d    ", i+1);
            else
                printf("%d   ", i+1);
	    }

        else
            printf("%d   ", i+1);
	}
	printf("\n");
	for(i = 0; i < N; i++)
	{
	    if(i+1 < 10)
            printf("%d   ", i+1);
        else
            printf("%d  ", i+1);
		printf("|");
		for(j = 0; j < N; j++)
		{
		    if(displayGird[i][j] < 1000)
            {
                if(displayGird[i][j] < 10)
                    printf("000%d|", displayGird[i][j]);
                else if (displayGird[i][j] < 100)
                    printf("00%d|", displayGird[i][j]);
                else
                    printf("0%d|", displayGird[i][j]);
            }
            else
                printf("%d|", displayGird[i][j]);
		}
		printf("\n");
	}
}
