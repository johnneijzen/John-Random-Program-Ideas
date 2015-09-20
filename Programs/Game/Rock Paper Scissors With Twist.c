/*
    Version
        0.07 by John V. Neijzen
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
        0.06 9/14/2015 - Add more rand() to rand(()
        	 - Adding 7 moves version bit
        0.07 9/20/2015 - Adding 3 moves Just in case you want classic
                       - Add Fully 7 Version
                       - Fully Rework Check Code to work with 3 5 7 moves version.
                       - Fix A.I. To Work different Versions.
*/
#include <stdlib.h> // Standard Library no use yet TODO:
#include <stdio.h> // For Printf and Scanf
#include <conio.h> // For kbhit() event
#include <windows.h> // For Sleep Commands to time everything
#include <time.h> // For Time Commands

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
int draw = 0;
int moves = 3;
char key;

void aiEasy() // only 3 out 10 chance to counter
{
    int r = 1 + (rand() % 10); // It give rand from 1 to 10

    if(r <= 3)
    {
        if(playerOneMoves == 1)
            playerTwoMoves = 2;
        if(playerOneMoves == 2)
            playerTwoMoves = 3;
        if(playerOneMoves == 3)
            playerTwoMoves = 1;
        if(playerOneMoves == 4)
            playerTwoMoves = 1;
        if(playerOneMoves == 5)
            playerTwoMoves = 2;
        if(playerOneMoves == 6)
            playerTwoMoves = 2;
        if(playerOneMoves == 7)
            playerTwoMoves = 1;
    }
    else
    {
        if(playerOneMoves == 1)
            playerTwoMoves = 3;
        if(playerOneMoves == 2)
            playerTwoMoves = 1;
        if(playerOneMoves == 3)
            playerTwoMoves = 2;
        if(playerOneMoves == 4)
            playerTwoMoves = 2;
        if(playerOneMoves == 5)
            playerTwoMoves = 1;
        if(playerOneMoves == 6)
            playerTwoMoves = 1;
        if(playerOneMoves == 7)
            playerTwoMoves = 2;
    }
}

void aiHard() // only 7 out 10 chance to counter
{
    int r = 1 + (rand() % 10); // It give rand from 1 to 10

    if(r <= 7)
    {
        if(playerOneMoves == 1)
            playerTwoMoves = 2;
        if(playerOneMoves == 2)
            playerTwoMoves = 3;
        if(playerOneMoves == 3)
            playerTwoMoves = 1;
        if(playerOneMoves == 4)
            playerTwoMoves = 1;
        if(playerOneMoves == 5)
            playerTwoMoves = 2;
        if(playerOneMoves == 6)
            playerTwoMoves = 2;
        if(playerOneMoves == 7)
            playerTwoMoves = 1;
    }
    else
    {
        if(playerOneMoves == 1)
            playerTwoMoves = 3;
        if(playerOneMoves == 2)
            playerTwoMoves = 1;
        if(playerOneMoves == 3)
            playerTwoMoves = 2;
        if(playerOneMoves == 4)
            playerTwoMoves = 2;
        if(playerOneMoves == 5)
            playerTwoMoves = 1;
        if(playerOneMoves == 6)
            playerTwoMoves = 1;
        if(playerOneMoves == 7)
            playerTwoMoves = 2;
    }
}

void aiUnfair() // ALLWAYS WINS XD
{
    if(playerOneMoves == 1)
        playerTwoMoves = 2;
    if(playerOneMoves == 2)
        playerTwoMoves = 3;
    if(playerOneMoves == 3)
        playerTwoMoves = 1;
    if(playerOneMoves == 4)
        playerTwoMoves = 1;
    if(playerOneMoves == 5)
        playerTwoMoves = 2;
    if(playerOneMoves == 6)
        playerTwoMoves = 2;
    if(playerOneMoves == 7)
        playerTwoMoves = 1;
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
                if(moves == 3)
                {
                    if(key == 'q')
                        playerOneMoves = 1;
                    else if(key == 'w')
                        playerOneMoves = 2;
                    else if(key == 'e')
                        playerOneMoves = 3;
                }
                if(moves == 5)
                {
                    if(key == 'q')
                        playerOneMoves = 1;
                    else if(key == 'w')
                        playerOneMoves = 2;
                    else if(key == 'e')
                        playerOneMoves = 3;
                    else if(key == 'a')
                        playerOneMoves = 4;
                    else if(key == 's')
                        playerOneMoves = 5;
                }
                if(moves == 7)
                {
                    if(key == 'q')
                        playerOneMoves = 1;
                    else if(key == 'w')
                        playerOneMoves = 2;
                    else if(key == 'e')
                        playerOneMoves = 3;
                    else if(key == 'a')
                        playerOneMoves = 4;
                    else if(key == 's')
                        playerOneMoves = 5;
                	else if(key == 'd')
                    	playerOneMoves = 6;
                   	else if(key == 'x')
                    	playerOneMoves = 7;
				}
            }
            if(AI == 0)
            {
                if(playerTwoMoves == 0)
                {
                    if(moves == 3)
                    {
                        if(key == 'u')
                            playerTwoMoves = 1;
                        else if(key == 'i')
                            playerTwoMoves = 2;
                        else if(key == 'o')
                            playerTwoMoves = 3;
                    }
                    if(moves == 5)
                    {
                        if(key == 'u')
                            playerTwoMoves = 1;
                        else if(key == 'i')
                            playerTwoMoves = 2;
                        else if(key == 'o')
                            playerTwoMoves = 3;
                        else if(key == 'j')
                            playerTwoMoves = 4;
                        else if(key == 'k')
                            playerTwoMoves = 5;
                    }
                    if(moves == 7)
                        if(key == 'u')
                            playerTwoMoves = 1;
                        else if(key == 'i')
                            playerTwoMoves = 2;
                        else if(key == 'o')
                            playerTwoMoves = 3;
                        else if(key == 'j')
                            playerTwoMoves = 4;
                        else if(key == 'k')
                            playerTwoMoves = 5;
                    	else if(key == 'l')
                    		playerTwoMoves = 6;
                    	else if(key == 'm')
                    		playerTwoMoves = 7;
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

void check()
{
    // 1 = Rock. 2 = Paper. 3 = Scissors. 4 = lizard. 5 = Spock. 6 = Dog. 7 = Gun.
    // Tied Check Code
    if((playerOneMoves == 1)&&(playerTwoMoves == 1)||
       (playerOneMoves == 2)&&(playerTwoMoves == 2)||
       (playerOneMoves == 3)&&(playerTwoMoves == 3)||
       (playerOneMoves == 4)&&(playerTwoMoves == 4)||
       (playerOneMoves == 5)&&(playerTwoMoves == 5)||
       (playerOneMoves == 6)&&(playerTwoMoves == 6)||
       (playerOneMoves == 7)&&(playerTwoMoves == 7))
    {
        printf("Draw");
        draw = draw + 1;
    }

    // Player 1 Win
    if((playerOneMoves == 1)&&(playerTwoMoves == 3)|| // Rock Win Against Scissors
       (playerOneMoves == 1)&&(playerTwoMoves == 4)|| // Rock Win Against Lizard
       (playerOneMoves == 1)&&(playerTwoMoves == 7)|| // Rock Win Against Gun
       (playerOneMoves == 2)&&(playerTwoMoves == 1)|| // Paper Win Against Rock
       (playerOneMoves == 2)&&(playerTwoMoves == 5)|| // Paper Win Against Spock
       (playerOneMoves == 2)&&(playerTwoMoves == 6)|| // Paper Win Against Dog
       (playerOneMoves == 3)&&(playerTwoMoves == 2)|| // Scissors Win Against Paper
       (playerOneMoves == 3)&&(playerTwoMoves == 4)|| // Scissors Win Against Lizard
       (playerOneMoves == 3)&&(playerTwoMoves == 7)|| // Scissors Win Against Gun
       (playerOneMoves == 4)&&(playerTwoMoves == 2)|| // Lizard Win Against Paper
       (playerOneMoves == 4)&&(playerTwoMoves == 5)|| // Lizard Win Against Spock
       (playerOneMoves == 4)&&(playerTwoMoves == 6)|| // Lizard Win Against Dog
       (playerOneMoves == 5)&&(playerTwoMoves == 1)|| // Spock Win Against Rock
       (playerOneMoves == 5)&&(playerTwoMoves == 3)|| // Spock Win Against Scissors
       (playerOneMoves == 5)&&(playerTwoMoves == 7)|| // Spock Win Against Gun
       (playerOneMoves == 6)&&(playerTwoMoves == 6)|| // Dog Win Against Rock
       (playerOneMoves == 6)&&(playerTwoMoves == 6)|| // Dog Win Against Scissors
       (playerOneMoves == 6)&&(playerTwoMoves == 6)|| // Dog Win Against Spock
       (playerOneMoves == 7)&&(playerTwoMoves == 2)|| // Gun Win Against Paper
       (playerOneMoves == 7)&&(playerTwoMoves == 4)|| // Gun Win Against Paper
       (playerOneMoves == 7)&&(playerTwoMoves == 6))  // Gun Win Against Paper
    {
        printf("Player 1 Win");
        playerOneWins = playerOneWins + 1;
    }

    // Player 2 Win
    if((playerTwoMoves == 1)&&(playerOneMoves == 3)|| // Rock Win Against Scissors
       (playerTwoMoves == 1)&&(playerOneMoves == 4)|| // Rock Win Against Lizard
       (playerTwoMoves == 1)&&(playerOneMoves == 7)|| // Rock Win Against Gun
       (playerTwoMoves == 2)&&(playerOneMoves == 1)|| // Paper Win Against Rock
       (playerTwoMoves == 2)&&(playerOneMoves == 5)|| // Paper Win Against Spock
       (playerTwoMoves == 2)&&(playerOneMoves == 6)|| // Paper Win Against Dog
       (playerTwoMoves == 3)&&(playerOneMoves == 2)|| // Scissors Win Against Paper
       (playerTwoMoves == 3)&&(playerOneMoves == 4)|| // Scissors Win Against Lizard
       (playerTwoMoves == 3)&&(playerOneMoves == 7)|| // Scissors Win Against Gun
       (playerTwoMoves == 4)&&(playerOneMoves == 2)|| // Lizard Win Against Paper
       (playerTwoMoves == 4)&&(playerOneMoves == 5)|| // Lizard Win Against Spock
       (playerTwoMoves == 4)&&(playerOneMoves == 6)|| // Lizard Win Against Dog
       (playerTwoMoves == 5)&&(playerOneMoves == 1)|| // Spock Win Against Rock
       (playerTwoMoves == 5)&&(playerOneMoves == 3)|| // Spock Win Against Scissors
       (playerTwoMoves == 5)&&(playerOneMoves == 7)|| // Spock Win Against Gun
       (playerTwoMoves == 6)&&(playerOneMoves == 6)|| // Dog Win Against Rock
       (playerTwoMoves == 6)&&(playerOneMoves == 6)|| // Dog Win Against Scissors
       (playerTwoMoves == 6)&&(playerOneMoves == 6)|| // Dog Win Against Spock
       (playerTwoMoves == 7)&&(playerOneMoves == 2)|| // Gun Win Against Paper
       (playerTwoMoves == 7)&&(playerOneMoves == 4)|| // Gun Win Against Paper
       (playerTwoMoves == 7)&&(playerOneMoves == 6))  // Gun Win Against Paper
    {
        printf("Player 2 Win");
        playerTwoWins = playerTwoWins + 1;
    }
}

void roundDisplay()
{
    printf("Rounds: %d. Player 1 Wins: %d. Player 2 Wins: %d. Draw: %d\n", rounds, playerOneWins, playerTwoWins, draw);
    if(moves == 3)
        printf("Q(Player1) Or U(Player2) is Rock,\nW(Player1) or I(Player2) is Paper,\nE(Player1) or O(Player2) is Scissors\n");
	if(moves == 5)
    {
        printf("Q(Player1) Or U(Player2) is Rock,\nW(Player1) or I(Player2) is Paper,\nE(Player1) or O(Player2) is Scissors\n");
        printf("A(Player1) or J(Player2) is Lizard,\nS(Player1) Or K(Player2) is Spock\n");
    }
    if(moves == 7)
    {
        printf("Q(Player1) Or U(Player2) is Rock,\nW(Player1) or I(Player2) is Paper,\nE(Player1) or O(Player2) is Scissors\n");
        printf("A(Player1) or J(Player2) is Lizard,\nS(Player1) Or K(Player2) is Spock\n");
        printf("D(Player1) or L(Player2) is Dog,\nX(Player1) Or M(Player2) is Gun\n");
    }
    printf("Note: Spamming key will break code\n");
    printf("5\n");
    Sleep(900);
    printf("4\n");
    Sleep(900);
    printf("3\n");
    Sleep(900);
    printf("2\n");
    Sleep(900);
    printf("1\n");
    Sleep(900);
    printf("Pick\n");
    Sleep(900);
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
    else if (playerOneMoves == 6)
    	printf("Player One Pick Gun\n");
    else if (playerOneMoves == 7)
    	printf("Player One Pick Dog\n");

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
    else if (playerTwoMoves == 6)
        printf("Player Two Pick Gun\n");
    else if (playerTwoMoves == 7)
        printf("Player Two Pick Dog\n");
}

void main() // Main Loop
{
	srand(time(NULL));
    printf("Welcome to Rock Paper Scissors with twist\n");
    printf("Enter how many round:\n");
    printf("Note: There no tie breaker so draw is possible\n");
    scanf("%d", &maxRound);
    system("cls");
    printf("3 or 5 or 7 moves\n");
    printf("Moves: ");
    scanf("%d", &moves);
    system("cls");
    printf("Do You Want AI or 2 player mode\n");
    printf("0 = 2 player,\n1 = AI Easy,\n2 = AI Hard,\n3 = AI UNFAIR\n");
    printf("A.I.: ");
    scanf("%d", &AI);
    system("cls");

    while(maxRound > rounds)
    {
        roundDisplay();
        playerKeyEvent();
        system("cls");
        moveDisplay();
        check();
        Sleep(3000);
        system("cls");
        rounds = rounds + 1;
        playerOneMoves = 0;
    	playerTwoMoves = 0;
    }

    if(playerOneWins > playerTwoWins)
		printf("Player One Wins Game");
	else if (playerTwoWins > playerOneWins)
		printf("Player Two Wins Game");
	else
		printf("Draw");

    getch();
}
