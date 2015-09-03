/*
    Version
        0.05 by John V. Neijzen
    Changelog
        0.01 - First Draft
        0.02 - Need Testing Still
        0.03 - Made Small bug where i forget reset key_code so move keep repeating
        0.04 - Add Bit of Display for scores
        0.05 9/3/2015 - Change: Bit Layout and Adding A.I Functions
                      - Change: Switch to if-else to see if that fix error i having. Nope but is cleaner.
                      - Change: getch(); to _getch();
                      - Add: A.I Easy() and A.I Hard(); and A.I UNFAIR.
                      - Fixed: Typo with >= vs >
*/
#include <stdlib.h> // Standard Library no use yet TODO:
#include <stdio.h> // For Printf and Scanf
#include <conio.h> // For kbhit() event
#include <windows.h> // For Sleep Commands to time everything

// Functions
void playerKeyEvent(); // This Functions is used to get key
void check(); // Check between Moves
void roundDisplay(); // Display for each game
void moveDisplay(); // Display moves after round ended
void empty(); // Dump other letters
void aiEasy();
void aiHard();
void aiUnfair();

// Some Global Variables
int AI = 0;
int rounds = 0;
int maxRound = 0;
int playerOneMoves = 0;
int playerTwoMoves = 0;
int playerOneWins = 0;
int playerTwoWins = 0;
int key;

void aiEasy() // only 3 out 10 chance to counter
{
    int r = 1 + (rand() % 10); // It give rand from 1 to 10

    if(r <= 3)
    {
        if(playerOneMoves == 3) // Rock Beat Scissors
            playerTwoMoves = 1;
        if(playerOneMoves == 4) // Rock Beat Lizard
            playerTwoMoves = 1;
        if(playerOneMoves == 1) // Paper Beat Rock
            playerTwoMoves = 2;
        if(playerOneMoves == 5) // Paper Beat Spock
            playerTwoMoves = 2;
        if(playerOneMoves == 2) // Scissors Beat Paper
            playerTwoMoves = 3;
        if(playerOneMoves == 4) // Scissors Beat Lizard
            playerTwoMoves = 3;
        if(playerOneMoves == 2) // Lizard Beat Paper
            playerTwoMoves = 4;
        if(playerOneMoves == 5) // Lizard Beat Spock
            playerTwoMoves = 4;
        if(playerOneMoves == 1) // Spock Beat Rock
            playerTwoMoves = 5;
        if(playerOneMoves == 3) // Spock Beat Scissors
            playerTwoMoves = 5;
    }
    else
    {
        if(playerOneMoves == 1) // Rock Beat Scissors
            playerTwoMoves = 3;
        if(playerOneMoves == 1) // Rock Beat Lizard
            playerTwoMoves = 4;
        if(playerOneMoves == 2) // Paper Beat Rock
            playerTwoMoves = 1;
        if(playerOneMoves == 2) // Paper Beat Spock
            playerTwoMoves = 5;
        if(playerOneMoves == 3) // Scissors Beat Paper
            playerTwoMoves = 2;
        if(playerOneMoves == 3) // Scissors Beat Lizard
            playerTwoMoves = 4;
        if(playerOneMoves == 4) // Lizard Beat Paper
            playerTwoMoves = 2;
        if(playerOneMoves == 4) // Lizard Beat Spock
            playerTwoMoves = 5;
        if(playerOneMoves == 5) // Spock Beat Rock
            playerTwoMoves = 1;
        if(playerOneMoves == 5) // Spock Beat Scissors
            playerTwoMoves = 3;
    }
}

void aiHard() // only 7 out 10 chance to counter
{
    int r = 1 + (rand() % 10); // It give rand from 1 to 10

    if(r <= 7)
    {
        if(playerOneMoves == 3) // Rock Beat Scissors
            playerTwoMoves = 1;
        if(playerOneMoves == 4) // Rock Beat Lizard
            playerTwoMoves = 1;
        if(playerOneMoves == 1) // Paper Beat Rock
            playerTwoMoves = 2;
        if(playerOneMoves == 5) // Paper Beat Spock
            playerTwoMoves = 2;
        if(playerOneMoves == 2) // Scissors Beat Paper
            playerTwoMoves = 3;
        if(playerOneMoves == 4) // Scissors Beat Lizard
            playerTwoMoves = 3;
        if(playerOneMoves == 2) // Lizard Beat Paper
            playerTwoMoves = 4;
        if(playerOneMoves == 5) // Lizard Beat Spock
            playerTwoMoves = 4;
        if(playerOneMoves == 1) // Spock Beat Rock
            playerTwoMoves = 5;
        if(playerOneMoves == 3) // Spock Beat Scissors
            playerTwoMoves = 5;
    }
    else
    {
        if(playerOneMoves == 1) // Rock Beat Scissors
            playerTwoMoves = 3;
        if(playerOneMoves == 1) // Rock Beat Lizard
            playerTwoMoves = 4;
        if(playerOneMoves == 2) // Paper Beat Rock
            playerTwoMoves = 1;
        if(playerOneMoves == 2) // Paper Beat Spock
            playerTwoMoves = 5;
        if(playerOneMoves == 3) // Scissors Beat Paper
            playerTwoMoves = 2;
        if(playerOneMoves == 3) // Scissors Beat Lizard
            playerTwoMoves = 4;
        if(playerOneMoves == 4) // Lizard Beat Paper
            playerTwoMoves = 2;
        if(playerOneMoves == 4) // Lizard Beat Spock
            playerTwoMoves = 5;
        if(playerOneMoves == 5) // Spock Beat Rock
            playerTwoMoves = 1;
        if(playerOneMoves == 5) // Spock Beat Scissors
            playerTwoMoves = 3;
    }
}

void aiUnfair() // ALLWAYS WINS XD
{
    if(playerOneMoves == 3) // Rock Beat Scissors
        playerTwoMoves = 1;
    if(playerOneMoves == 4) // Rock Beat Lizard
        playerTwoMoves = 1;
    if(playerOneMoves == 1) // Paper Beat Rock
        playerTwoMoves = 2;
    if(playerOneMoves == 5) // Paper Beat Spock
        playerTwoMoves = 2;
    if(playerOneMoves == 2) // Scissors Beat Paper
        playerTwoMoves = 3;
    if(playerOneMoves == 4) // Scissors Beat Lizard
        playerTwoMoves = 3;
    if(playerOneMoves == 2) // Lizard Beat Paper
        playerTwoMoves = 4;
    if(playerOneMoves == 5) // Lizard Beat Spock
        playerTwoMoves = 4;
    if(playerOneMoves == 1) // Spock Beat Rock
        playerTwoMoves = 5;
    if(playerOneMoves == 3) // Spock Beat Scissors
        playerTwoMoves = 5;
}

void playerKeyEvent()
{
    while((playerOneMoves == 0)||(playerTwoMoves == 0))
    {
        if (kbhit())
        {
            key = _getch();

            if(playerOneMoves == 0)
            {
                if(key == 'w')
                    playerOneMoves = 1;
                else if(key == 'a')
                    playerOneMoves = 2;
                else if(key == 's')
                    playerOneMoves = 3;
                else if(key == 'd')
                    playerOneMoves = 4;
                else if(key == 'x')
                    playerOneMoves = 5;
            }

            if(AI == 0)
            {
                if(playerTwoMoves == 0)
                {
                    if(key == 'i')
                        playerTwoMoves = 1;
                    else if(key == 'j')
                        playerTwoMoves = 2;
                    else if(key == 'k')
                        playerTwoMoves = 3;
                    else if(key == 'l')
                        playerTwoMoves = 4;
                    else if(key == 'm')
                        playerTwoMoves = 5;
                }
            }
            else
            {
                if(AI == 1)
                    aiEasy();
                else if (AI == 2)
                    aiHard();
                else if (AI == 3)
                    aiUnfair();
            }
        }
    }
}

void check() // It Checks Who Won
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

void roundDisplay()
{
    printf("Rounds: %d. Player 1 Wins: %d. Player 2 Wins: %d.\n", rounds, playerOneWins, playerTwoWins);
	printf("W(Player1) Or I(Player2) is Rock,\nA(Player1) or J(Player2) is Paper,\nS(Player1) or K(Player2) is Scissors\nD(Player1) or L(Player2) is Lizard,\nX(Player1) Or M(Player2) is Spock\n");
    printf("Note: Spamming key will break code\n");
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
}

void moveDisplay()
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

void main() // Main Loop
{
    printf("Welcome to Rock Paper Scissors with twist\n");
    printf("Enter how many round:\n");
    printf("Note: There no tie breaker so draw is possible\n");
    scanf("%d", &maxRound);
    system("cls");
    printf("Do You Want AI or 2 player mode\n");
    printf("0 = 2 player,\n1 = AI Easy,\n2 = AI Hard,\n3 = AI UNFAIR\n");
    scanf("%d", &AI);

    while(maxRound > rounds)
    {
        roundDisplay();
        playerKeyEvent();
        system("cls");
        moveDisplay();
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
