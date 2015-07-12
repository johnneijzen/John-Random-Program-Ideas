#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    // valuables for game
    int PlayerOneHP = 100;
    int PlayerTwoHP = 100;
    int PlayerOneMove = 0;
    int PlayerTwoMove = 0;
    int PlayerOneWinCount = 0;
    int PlayerTwoWinCount = 0;
    int GameRounds = 0;
    int MaxGameRounds = 0;
    int GameOn = 1;

    // Basic Input From User
    printf("\nHow many Rounds You Like: ");
    scanf("%d",&MaxGameRounds);
    printf("\nPress Any Key To Start");
    getch();
    system("cls");

    while ( GameOn == 1 )
    {
        if (MaxGameRounds > GameRounds)
        {
            PlayerOneMove = 0;
            PlayerTwoMove = 0;
            // AI Player 2 Moves
            while ( PlayerTwoMove == 0 )
            {
                PlayerTwoMove = rand() % 4;
            }

            // User Moves
            printf("\n\nRound: %d", GameRounds);
            printf("\n\nPlayer 1 wins: %d, Player 2 Wins: %d", PlayerOneWinCount, PlayerTwoWinCount);
            printf("\n\nPlayer 1 HP: %d, Player 2 HP: %d", PlayerOneHP, PlayerTwoHP);
            printf("\nNote Atk > Magic, Magic > Block, Block > Atk");
            printf("\nPick a Move: 1 = Atk, 2 = Block, 3 = Magic. Move: ");
            scanf("%d", &PlayerOneMove);

            if ((PlayerOneMove == 1)&&(PlayerTwoMove == 1))
            {
                printf("\nBoth Player Used ATK So Both Player Get DMG");
                PlayerOneHP = PlayerOneHP - 20;
                PlayerTwoHP = PlayerTwoHP - 20;
            }
            else if((PlayerOneMove == 1)&&(PlayerTwoMove == 2))
            {
                printf("\nPlayer 2 Block ATK From Player 1");
            }
            else if((PlayerOneMove == 1)&&(PlayerTwoMove == 3))
            {
                printf("\nPlayer 1 ATK Player 2 Before Player 2 Can Use Magic");
                PlayerTwoHP = PlayerTwoHP - 20;
            }
            else if((PlayerOneMove == 2)&&(PlayerTwoMove == 1))
            {
                printf("\nPlayer 1 Block ATK From Player 2");
            }
            else if((PlayerOneMove == 2)&&(PlayerTwoMove == 2))
            {
                printf("\nBoth Player Picked Block");
            }
            else if((PlayerOneMove == 2)&&(PlayerTwoMove == 3))
            {
                printf("\nBlock Cant Block Magic So Player 1 Get DMG");
                PlayerOneHP = PlayerOneHP - 20;
            }
            else if((PlayerOneMove == 3)&&(PlayerTwoMove == 1))
            {
                printf("\nPlayer 2 ATK Player 1 Before Player 1 Can Use Magic");
                PlayerOneHP = PlayerOneHP - 20;
            }
            else if((PlayerOneMove == 3)&&(PlayerTwoMove == 2))
            {
                printf("\nBlock Cant Block Magic So player 2 Get DMG");
                PlayerTwoHP = PlayerTwoHP - 20;
            }
            else if((PlayerOneMove == 3)&&(PlayerTwoMove == 3))
            {
                printf("\nBoth Player Picked ATK So Both Player Get DMG");
                PlayerOneHP = PlayerOneHP - 20;
                PlayerTwoHP = PlayerTwoHP - 20;
            }

            Sleep(1500);
            system("cls");

            if ((PlayerOneHP == 0)&&(PlayerTwoHP > 0))
            {
                printf("\nPlayer Two Won Round");
                GameRounds = GameRounds + 1;
                // Reset Hp For Next Round
                PlayerOneHP = 100;
                PlayerTwoHP = 100;
                PlayerTwoWinCount = PlayerTwoWinCount + 1;
                getch();
            }
            else if ((PlayerTwoHP == 0)&&(PlayerOneHP > 0))
            {
                printf("\nPlayer One Won Round");
                GameRounds = GameRounds + 1;
                // Reset Hp For Next Round
                PlayerOneHP = 100;
                PlayerTwoHP = 100;
                PlayerOneWinCount = PlayerOneWinCount + 1;
                getch();
            }
            else if ((PlayerOneHP == 0)&&(PlayerTwoHP == 0))
            {
                printf("\nBoth Died New Round");
                GameRounds = GameRounds + 1;
                // Reset Hp For Next Round
                PlayerOneHP = 100;
                PlayerTwoHP = 100;
                getch();
            }
        }
        else
        {
            if (PlayerTwoWinCount > PlayerOneWinCount)
            {
                printf("\nPlayer Two Win Game");
                GameOn = 0;
            }
            else if (PlayerOneWinCount > PlayerTwoWinCount)
            {
                printf("\nPlayer One Win Game");
                GameOn = 0;
            }
            else
            {
                printf("\nBAKA! DRAW! NO ONE WON!");
                GameOn = 0;
            }
        }
    }
    printf("\nThanks For Playing");
    return 0;
}
