/*
    Version
        0.08 by John V. Neijzen
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
        0.08 /9/27/2015 - change round system to lives system .
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
int maxLives = 0;
int playerOneMoves = 0;
int playerTwoMoves = 0;
int playerOneLives = 0;
int playerTwoLives = 0;
int draw = 0;
int moves = 3;
char key;

void aiChooseMove(int counterChance) 
{	
	int r = 1 + (rand() % 10); // It give rand from 1 to 10
	if (r<=counterChance)
	{ 
	   int aiChoices[] = {2,3,1,1,2,2,1};
	   for(int i=1;i<=7;i++)
	   {
	     if(playerOneMoves == i)
              playerTwoMoves = aiChoices[i-1];
	   }
	}
	else
	{
	   int aiChoices[] = {3,1,2,2,1,1,2,};
	   for(int i=1;i<=7;i++)
	   {
	     if(playerOneMoves == i)
              playerTwoMoves = aiChoices[i-1];
	   }	
	}
}

void aiEasy() // only 3 out 10 chance to counter
{
    aiChooseMove(3);
}

void aiHard() // only 7 out 10 chance to counter
{
    aiChooseMove(7);
}

void aiUnfair() // ALLWAYS WINS XD
{
  aiChooseMove(10);
}

void playerKeyEvent()
{         
    char keys1[] = {'q','w','e','a','s','d','x','\0'};
    char keys2[] = {'u','i','o','j','k','l','m','\0'};

    while((playerOneMoves == 0)||(playerTwoMoves == 0))
    {
        if (kbhit())
        {
            key = _getch();

            if(playerOneMoves == 0)
            {
                if(moves == 3)
                {
           	    for (int i =0;i<3;i++)
		    {
		       if(key == keys1[i])
                          playerTwoMoves = i+1;
		    }
                }
                if(moves == 5)
                {
                    for (int i =0;i<5;i++)
		    {
		       if(key == keys1[i])
                          playerTwoMoves = i+1;
		    }
                }
                if(moves == 7)
                {
		    for (int i =0;i<7;i++)
		    {
		       if(key == keys1[i])
                          playerTwoMoves = i+1;
		    }
		}
            }
            if(AI == 0)
            {
                if(playerTwoMoves == 0)
                {
                    if(moves == 3)
                    {
                        for (int i =0;i<3;i++)
			{
			if(key == keys2[i])
                            playerTwoMoves = i+1;
			}
                    }
                    if(moves == 5)
                    {
                        for (int i =0;i<5;i++)
			{
			if(key == keys2[i])
                            playerTwoMoves = i+1;
			}
                    }
                    if(moves == 7)
		    {
                        for (int i =0;i<7;i++)
			{
			if(key == keys2[i])
                            playerTwoMoves = i+1;
			}
		    }
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
   /*
    * Rock Win Against Scissors
    * Rock Win Against Lizard
    * Rock Win Against Gun
    * Paper Win Against Rock
    * Paper Win Against Spock
    * Paper Win Against Dog
    * Scissors Win Against Paper
    * Scissors Win Against Lizard
    * Scissors Win Against Gun
    * Lizard Win Against Paper
    * Lizard Win Against Spock
    * Lizard Win Against Dog
    * Spock Win Against Rock
    * Spock Win Against Scissors
    * Spock Win Against Gun
    * Dog Win Against Rock
    * Dog Win Against Scissors
    * Dog Win Against Spock
    * Gun Win Against Paper
    * Gun Win Against Paper
    * Gun Win Against Paper
    */
	
    // 1 = Rock. 2 = Paper. 3 = Scissors. 4 = lizard. 5 = Spock. 6 = Dog. 7 = Gun.
    // Tied Check Code
    for(int i=1;i>=7;i++){
    	if((playerOneMoves == i)&&(playerTwoMoves == i))
    	{
            printf("Draw");
            draw = draw + 1;
	    break;
    	} else continue;
    }

    int posiblePlayerMoves[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7};
    int loseConditions[]     = {3,4,7,1,5,6,2,4,7,2,5,6,1,3,7,6,6,2,4};
    
    // Player 1 Win
    for (int i=0;i<21;i++) {
    	if((playerOneMoves == posiblePlayerMoves[i]) && (playerTwoMoves==loseConditions[i])){
		printf("Player 1 Win");
        	playerTwoLives = playerTwoLives - 1;
		break;
	} else continue;
    }
   // Player 2 Win
    for (int i=0;i<21;i++) {
    	if((playerTwoMoves == posiblePlayerMoves[i]) && (playerOneMoves==loseConditions[i])){
		printf("Player 1 Win");
        	playerOneLives = playerOneLives - 1;
		break;
	} else continue;
    }
   
}

void roundDisplay()
{
    printf("Player 1 Lives: %d. Player 2 Lives: %d. Draw: %d\n", playerOneLives, playerTwoLives, draw);
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
    char* choices [] = {"Rock\n","Paper\n","Scissors\n","Lisard\n","Spock\n","Gun\n","Dog\n"};
    for (int i=1;i<=7;i++){
	    if (playerOneMoves == i)
        	printf("Player One Pick ");
	    	printf(choices[i-1]);
    }
    for (int i=1;i<=7;i++){
	    if (playerTwoMoves == i)
        	printf("Player One Pick ");
	    	printf(choices[i-1]);
    }
}

void main() // Main Loop
{
    srand(time(NULL));
    printf("Welcome to Rock Paper Scissors with twist\n");
    printf("Enter how many lives each player gets: \n");
    scanf("%d", &maxLives);
    playerOneLives = maxLives;
    playerTwoLives = maxLives;
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

    while((playerOneLives != 0)&&(playerTwoLives != 0))
    {
        roundDisplay();
        playerKeyEvent();
        system("cls");
        moveDisplay();
        check();
        Sleep(3000);
        system("cls");
        playerOneMoves = 0;
    	playerTwoMoves = 0;
    }

    if(playerOneLives = 0) printf("Player Two Wins Game");
    else printf("Player One Wins Game");
    getch();
}
