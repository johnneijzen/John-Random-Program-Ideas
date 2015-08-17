/*
    Version
        0.04
    Changelog
        0.01 - First Draft
        0.02 - Need Testing Still
        0.03 - Made Small bug where i forget reset key_code so move keep repeating
        0.04 - Add Bit of Display for scores
*/
#include <stdio.h> // For Printf and Scanf
#include <conio.h> // For kbhit() event
#include <windows.h> // For Sleep Commands to time everything

// Some Global Variables
int player = 1;
int rounds = 0;
int maxRound = 0;
int playerOneMoves = 0;
int playerTwoMoves = 0;
int playerOneWins = 0;
int playerTwoWins = 0;
char key_code;

int main() // Main Loop
{
    printf("Welcome to Rock Paper Scissors with twist\n");
    printf("Enter how many round:\n");
    printf("Note: There no tie breaker so draw is possible\n");
    scanf("%d", &maxRound);
    system("cls");

    while(maxRound >= rounds)
    {
        playerKeyEvent();
        system("cls");
        display();
        check();
        Sleep(2000);
        system("cls");
        rounds = rounds + 1;
        playerOneMoves = 0;
    	playerTwoMoves = 0;
    }
    
    if(playerOneWins > playerTwoWins)
    	printf("Player One Wins Game");
	else if (playerTwoWins > playerOneWins)
		printf("Player Two Wins");
	else
		printf("Tied");
}

int playerKeyEvent()
{
	printf("Player 1 Wins: %d. Player 2 Wins: %d\n", playerOneWins, playerTwoWins);
    printf("5\n");
    Sleep(800);
    printf("4\n");
    Sleep(800);
    printf("3\n");
    Sleep(800);
    printf("2\n");
    Sleep(800);
    printf("1\n");
    Sleep(800);
    printf("Pick\n");
    Sleep(800);
    while((playerOneMoves == 0)||(playerTwoMoves == 0))
    {
        if (kbhit())
        {
        	key_code = ' ';
            key_code = getch();
            if(playerOneMoves == 0)
            {
                switch(key_code)
                {
                case 'w': // Rock for player 1
                    playerOneMoves = 1;
                    break;
                case 'a': // Paper for player 1
                    playerOneMoves = 2;
                    break;
                case 's': // Scissors for player 1
                    playerOneMoves = 3;
                    break;
                case 'd': // Lizard for player 1
                    playerOneMoves = 4;
                    break;
                case 'x': // Spock for player 1
                    playerOneMoves = 5;
                    break;
                }
            }
            if(playerTwoMoves == 0)
            {
                switch(key_code)
                {
                case 'i': // Rock for player 2
                    playerTwoMoves = 1;
                    break;
                case 'j': // Paper for player 2
                    playerTwoMoves = 2;
                    break;
                case 'k': // Scissors for player 2
                    playerTwoMoves = 3;
                    break;
                case 'l': // Lizard for player 2
                    playerTwoMoves = 4;
                    break;
                case 'm': // Spock for player 2
                    playerTwoMoves = 5;
                    break;
                }
            }
        }
    }
}

int check() // It Checks Who Won
{
    // 1 = Rock. 2 = Paper. 3 = Scissors. 4 = lizard. 5 = Spock.
    // Tied Check Code
    if((playerOneMoves == 1)&&(playerTwoMoves == 1)||
       (playerOneMoves == 2)&&(playerTwoMoves == 2)||
       (playerOneMoves == 3)&&(playerTwoMoves == 3)||
       (playerOneMoves == 4)&&(playerTwoMoves == 4)||
       (playerOneMoves == 5)&&(playerTwoMoves == 5))
    {
        printf("Tied");
    }
    // Player 1 win. I HATE MYSELFT TOO MANY COMBAINSIONS
    if((playerOneMoves == 1)&&(playerTwoMoves == 3)|| // Rock Beat Scissors
       (playerOneMoves == 1)&&(playerTwoMoves == 4)|| // Rock Beat Lizard
       (playerOneMoves == 2)&&(playerTwoMoves == 1)|| // Paper Beat Rock
       (playerOneMoves == 2)&&(playerTwoMoves == 5)|| // Paper Beat Spock
       (playerOneMoves == 3)&&(playerTwoMoves == 2)|| // Scissors Beat Paper
       (playerOneMoves == 3)&&(playerTwoMoves == 4)|| // Scissors Beat Lizard
       (playerOneMoves == 4)&&(playerTwoMoves == 2)|| // Lizard Beat Paper
       (playerOneMoves == 4)&&(playerTwoMoves == 5)|| // Lizard Beat Spock
       (playerOneMoves == 5)&&(playerTwoMoves == 1)|| // Spock Beat Rock
       (playerOneMoves == 5)&&(playerTwoMoves == 3)) // Spock Beat Scissors
    {
        playerOneWins = playerOneWins + 1;
        printf("Player 1 Wins");
    }
    // Player 2 win.
    if((playerTwoMoves == 1)&&(playerOneMoves == 3)|| // Rock Beat Scissors
       (playerTwoMoves == 1)&&(playerOneMoves == 4)|| // Rock Beat Lizard
       (playerTwoMoves == 2)&&(playerOneMoves == 1)|| // Paper Beat Rock
       (playerTwoMoves == 2)&&(playerOneMoves == 5)|| // Paper Beat Spock
       (playerTwoMoves == 3)&&(playerOneMoves == 2)|| // Scissors Beat Paper
       (playerTwoMoves == 3)&&(playerOneMoves == 4)|| // Scissors Beat Lizard
       (playerTwoMoves == 4)&&(playerOneMoves == 2)|| // Lizard Beat Paper
       (playerTwoMoves == 4)&&(playerOneMoves == 5)|| // Lizard Beat Spock
       (playerTwoMoves == 5)&&(playerOneMoves == 1)|| // Spock Beat Rock
       (playerTwoMoves == 5)&&(playerOneMoves == 3)) // Spock Beat Scissors
    {
        playerTwoWins = playerTwoWins + 1;
        printf("Player 2 Wins");
    }
}

int display()
{
    if (playerOneMoves == 1)
        printf("Player One Pick Rock\n");
    else if (playerOneMoves == 2)
        printf("Player One Pick Paper\n");
    else if (playerOneMoves == 3)
        printf("Player One Pick Scissors\n");
    else if (playerOneMoves == 4)
        printf("Player One Pick Lizard\n");
    else if (playerOneMoves == 5)
        printf("Player One Pick Spock\n");

    if (playerTwoMoves == 1)
        printf("Player Two Pick Rock\n");
    else if (playerTwoMoves == 2)
        printf("Player Two Pick Paper\n");
    else if (playerTwoMoves == 3)
        printf("Player Two Pick Scissors\n");
    else if (playerTwoMoves == 4)
        printf("Player Two Pick Lizard\n");
    else if (playerTwoMoves == 5)
        printf("Player Two Pick Spock\n");
}
