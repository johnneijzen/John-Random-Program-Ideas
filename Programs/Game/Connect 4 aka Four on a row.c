#include <stdio.h>
#include <windows.h>

/*
    Version
        0.01
    Change-logs
        0.01 - complete rewrite of old one
*/

//Function
void display();
void gameLoop();
void check();

//Global Variables
char grid[6][7] = {
		'*', '*', '*', '*', '*', '*', '*',
		'*', '*', '*', '*', '*', '*', '*',
		'*', '*', '*', '*', '*', '*', '*',
		'*', '*', '*', '*', '*', '*', '*',
		'*', '*', '*', '*', '*', '*', '*',
		'*', '*', '*', '*', '*', '*', '*'
};
int playerOneMove = 0;
int playerTwoMove = 0;
int column1 = 5;
int column2 = 5;
int column3 = 5;
int column4 = 5;
int column5 = 5;
int column6 = 5;
int column7 = 5;


int main()
{
    int gameOn = 1;

    display();
    do
    {
        printf("Player 1 move: ");
        scanf("%d", &playerOneMove);
        gameLoop();
        playerOneMove = 0; // Reset back to normal
        system("cls");
        display();
        check();
        printf("Player 2 move: ");
        scanf("%d", &playerTwoMove);
        gameLoop();
        playerTwoMove = 0; // Reset back to normal
        system("cls");
        display();
    }
    while(gameOn == 1);
}

void display()
{
    int i,j;

    printf("1 2 3 4 5 6 7\n");
    for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 7; j++)
		{
			printf("%c ", grid[i][j]);
		}
		printf("\n");
	}
}

void gameLoop()
{
    if(playerOneMove == 1){
        grid[column1][0] = 'R';
        column1 = column1 - 1;
    }
    else if(playerOneMove == 2){
        grid[column2][1] = 'R';
        column2 = column2 - 1;
    }
    else if(playerOneMove == 3){
        grid[column3][2] = 'R';
        column3 = column3 - 1;
    }
    else if(playerOneMove == 4){
        grid[column4][3] = 'R';
        column4 = column4 - 1;
    }
    else if(playerOneMove == 5) {
        grid[column5][4] = 'R';
        column5 = column5 - 1;
    }
    else if(playerOneMove == 6){
        grid[column6][5] = 'R';
        column6 = column6 - 1;
    }
    else if(playerOneMove == 7){
        grid[column7][6] = 'R';
        column7 = column7 - 1;
    }

    if(playerTwoMove == 1){
        grid[column1][0] = 'Y';
        column1 = column1 - 1;
    }
    else if(playerTwoMove == 2){
        grid[column2][1] = 'Y';
        column2 = column2 - 1;
    }
    else if(playerTwoMove == 3){
        grid[column3][2] = 'Y';
        column3 = column3 - 1;
    }
    else if(playerTwoMove == 4){
        grid[column4][3] = 'Y';
        column4 = column4 - 1;
    }
    else if(playerTwoMove == 5){
        grid[column5][4] = 'Y';
        column5 = column5 - 1;
    }
    else if(playerTwoMove == 6){
        grid[column6][5] = 'Y';
        column6 = column6 - 1;
    }
    else if(playerTwoMove == 7){
        grid[column7][6] = 'Y';
        column7 = column7 - 1;
    }
}

void check()
{

}
