#include <stdio.h>

// GameCreated By John V. Neijzen
// Change-logs
// 0.01 First Code 8/6/2015
// 0.02 Adding More 8/7/2015
// function declaration

// Global Variables i looks weird
int Player1Input = 0;
int Player2Input = 0;
int display[6][7] = {
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0
};
int i,j,k;
int column1[6] = {0, 0, 0, 0, 0, 0};
int column2[6] = {0, 0, 0, 0, 0, 0};
int column3[6] = {0, 0, 0, 0, 0, 0};
int column4[6] = {0, 0, 0, 0, 0, 0};
int column5[6] = {0, 0, 0, 0, 0, 0};
int column6[6] = {0, 0, 0, 0, 0, 0};
int column7[6] = {0, 0, 0, 0, 0, 0};

// Main Code
int main()
{
	int Player = 1;
	int WhoWon = 0;

	Display();

    while(WhoWon == 0)
    {
        if(Player == 1)
        {
            printf("Player 1 (1) Turn");
            do
            {
                scanf("%d", &Player1Input);
                if((Player1Input < 1)||(Player1Input > 7))
                    printf("Try Aging");
            }
            while((Player1Input < 1)||(Player1Input > 7));
            RunGameLoop();
            Display();
            Player1Input = 0;
            Player = 2;
        }
        if(Player == 2)
        {
            printf("Player 2 (2) Turn");
            do
            {
                scanf("%d", &Player2Input);
                if((Player2Input < 1)||(Player2Input > 7))
                    printf("Try Aging");
            }
            while((Player2Input < 1)||(Player2Input > 7));
            RunGameLoop();
            Display();
            Player2Input = 0;
            Player = 1;
        }
    }
    return 0;
}

// Display Code
int Display()
{
    system("cls");

	// Display Print Out
	printf("top of grid is coording");
    printf("\n1 2 3 4 5 6 7\n");
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 7; j++)
		{
			printf("%d ", display[i][j]);
		}
		printf("\n");
	}
}

// Game Code
int RunGameLoop()
{
    // Player 1 Input
    switch(Player1Input)
    {
        case 1:
            column1[0] = 1;
            break;
        case 2:
            column2[0] = 1;
            break;
        case 3:
            column3[0] = 1;
            break;
        case 4:
            column4[0] = 1;
            break;
        case 5:
            column5[0] = 1;
            break;
        case 6:
            column6[0] = 1;
            break;
        case 7:
            column7[0] = 1;
            break;
    }

    // Player 2 Input
    switch(Player2Input)
    {
        case 1:
            column1[0] = 2;
            break;
        case 2:
            column2[0] = 2;
            break;
        case 3:
            column3[0] = 2;
            break;
        case 4:
            column4[0] = 2;
            break;
        case 5:
            column5[0] = 2;
            break;
        case 6:
            column6[0] = 2;
            break;
        case 7:
            column7[0] = 2;
            break;
    }

    while((column1[0] == 1)||(column1[0] == 2))
    {
        for(i = 0; i < 6; i++)
        {
            if(column1[i] == 0)
            {
                column1[i] = column1[i-1];
                column1[i-1] = 0;
            }
        }
    }

    while((column2[0] == 1)||(column2[0] == 2))
    {
        for(i = 1; i < 6; i++)
        {
            if(column2[i] == 0)
            {
                column2[i] = column2[i-1];
                column2[i-1] = 0;
            }
        }
    }

    while((column3[0] == 1)||(column3[0] == 2))
    {
        for(i = 1; i < 6; i++)
        {
            if(column3[i] == 0)
            {
                column3[i] = column3[i-1];
                column3[i-1] = 0;
            }
        }
    }

    while((column4[0] == 1)||(column4[0] == 2))
    {
        for(i = 1; i < 6; i++)
        {
            if(column4[i] == 0)
            {
                column4[i] = column4[i-1];
                column4[i-1] = 0;
            }
        }
    }

    while((column5[0] == 1)||(column5[0] == 2))
    {
        for(i = 1; i < 6; i++)
        {
            if(column5[i] == 0)
            {
                column5[i] = column5[i-1];
                column5[i-1] = 0;
            }
        }
    }

    while((column6[0] == 1)||(column6[0] == 2))
    {
        for(i = 1; i < 6; i++)
        {
            if(column6[i] == 0)
            {
                column6[i] = column6[i-1];
                column6[i-1] = 0;
            }
        }
    }

    while((column7[0] == 1)||(column7[0] == 2))
    {
        for(i = 1; i < 6; i++)
        {
            if(column7[i] == 0)
            {
                column7[i] = column7[i-1];
                column7[i-1] = 0;
            }
        }
    }

    for(i = 0; i < 7; i++)
	{
		for(j = 0; j < 6; j++)
		{
			if(i == 0)
                display[j][i] = column1[j];
            if(i == 1)
                display[j][i] = column2[j];
            if(i == 2)
                display[j][i] = column3[j];
            if(i == 3)
                display[j][i] = column4[j];
            if(i == 4)
                display[j][i] = column5[j];
            if(i == 5)
                display[j][i] = column6[j];
            if(i == 6)
                display[j][i] = column7[j];
		}
	}
}

// Check Code
int CheckCode()
{
    
}
