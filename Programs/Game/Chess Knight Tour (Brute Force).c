/*
    @author:    John V. Neijzen
    @activity:  Chess Knight Tour (Brute Force)
    @section:   CSA 12 A
    @version:   0.1
    @Change-logs:
        0.01 - First Draft
*/

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <conio.h>

int displayGird[8][8] = {0};
int count = 1;
int row = 0;
int col = 0;
int userRow = 0;
int userCol = 0;
int trial = 0;

void display();
void forceReset();
void pickMove(int pattern1, int pattern2, int pattern3, int pattern4, int pattern5, int pattern6, int pattern7, int pattern8);
void checkMove();
void run();

void main()
{
    srand (time(NULL));
    setbuf(stdout, NULL);

	printf("\nStarting Postion");
	printf("\nRow: ");
	scanf("%d", &userRow);
	printf("\nCol: ");
	scanf("%d", &userCol);

    row = userRow - 1;
    col = userCol - 1;

    displayGird[row][col] = count;

    while(count < 64)
	{
		display();
		checkMove();
	}
}

void forceReset()
{
    trial = trial + 1;
    int i = 0,j = 0;
    for(i = 0; i < 8; i++)
    {
         for(j = 0; j < 8; j++)
         {
             displayGird[i][j]=0;
         }
    }
    row = userRow - 1;
    col = userCol - 1;
    count = 1;
    displayGird[row][col]=count;
}

void checkMove()
{
    int pattern1 = 0, pattern2 = 0, pattern3 = 0, pattern4 = 0,pattern5 = 0,pattern6 = 0, pattern7 = 0, pattern8 = 0;

    if((row+2>=0 && row + 2<=7)&&(col+1>=0 && col + 1 <= 7))
    {
        if(displayGird[row+2][col+1]==0)
            pattern1 = 1;
    }
    if((row+1>=0 && row+1<=7)&&(col+2>=0 && col+2<=7))
    {
        if(displayGird[row+1][col+2]==0)
            pattern2 = 1;
    }
    if((row-2>=0 && row-2<=7)&&(col-1>=0 && col-1<=7))
    {
        if(displayGird[row-2][col-1]==0)
            pattern3 = 1;
    }
    if((row-1>=0 && row-1<=7)&&(col-2>=0 && col-2<=7))
    {
        if(displayGird[row-1][col-2]==0)
            pattern4 = 1;
    }
    if((row+1>=0 && row+1<=7)&&(col-2>=0 && col-2<=7))
    {
        if(displayGird[row+1][col-2]==0)
            pattern5 = 1;
    }
    if((row-1>=0 && row-1<=7)&&(col+2>=0 && col+2<=7))
    {
        if(displayGird[row-1][col+2]==0)
            pattern6 = 1;
    }
    if((row+2>=0 && row+2<=7)&&(col-1>=0 && col-1<=7))
    {
        if(displayGird[row+2][col-1]==0)
            pattern7 = 1;
    }
    if((row-2>=0 && row-2<=7)&&(col+1>=0 && col+1<=7))
    {
        if(displayGird[row-2][col+1]==0)
            pattern8 = 1;
    }

    if((pattern1 == 0)&&(pattern2 == 0)&&(pattern3 == 0)&&(pattern4 == 0)&&(pattern5 == 0)&&(pattern6 == 0)&&(pattern7 == 0)&&(pattern8 == 0))
    {
        forceReset();
    }else{
        pickMove(pattern1, pattern2, pattern3, pattern4, pattern5, pattern6, pattern7, pattern8);
    }

}

void pickMove(int pattern1, int pattern2, int pattern3, int pattern4, int pattern5, int pattern6, int pattern7, int pattern8)
{
    int random = rand() % 8 + 1;
    int donePick = 0;

    if((pattern1 == 1)&&(random == 1))
    {
        row = row + 2;
        col = col + 1;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern2 == 1)&&(random == 2))
    {
        row = row + 1;
        col = col + 2;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern3 == 1)&&(random == 3))
    {
        row = row - 2;
        col = col - 1;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern4 == 1)&&(random == 4))
    {
        row = row - 1;
        col = col - 2;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern5 == 1)&&(random == 5))
    {
        row = row + 1;
        col = col - 2;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern6 == 1)&&(random == 6))
    {
        row = row - 1;
        col = col + 2;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern7 == 1)&&(random == 7))
    {
        row = row + 2;
        col = col - 1;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if((pattern8 == 1)&&(random == 8))
    {
        row = row - 2;
        col = col + 1;
        count++;
        displayGird[row][col] = count;
        display();
        donePick = 1;
    }
    if(donePick == 0)
        pickMove(pattern1, pattern2, pattern3, pattern4, pattern5, pattern6, pattern7, pattern8);
}

void display()
{
	int i = 0,j = 0;
	int Char = 65;
	printf("    ");
	for(i = 0; i < 8; i++)
	{
		printf("%c  ", Char);
		Char = Char + 1;
	}
	printf("\n");
	for(i = 0; i < 8; i++)
	{
		printf("%d ", i+1);
		printf("|");
		for(j = 0; j < 8; j++)
		{
		    if(displayGird[i][j] < 10)
                printf("0%d|", displayGird[i][j]);
            else
                printf("%d|", displayGird[i][j]);
		}
		printf("\n");
	}
	printf("Trial:%d\n", trial);
}
