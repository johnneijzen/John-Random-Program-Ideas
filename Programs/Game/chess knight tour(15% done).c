#include <stdio.h>
#include <conio.h>

//Left-Hand Diamond System
#define LHDS1R 0
#define LHDS1C 0
#define LHDS2R 2
#define LHDS2C 1
#define LHDS3R 3
#define LHDS3C 3
#define LHDS4R 1
#define LHDS4C 2
#define LHDS5R 0
#define LHDS5C 4
#define LHDS6R 1
#define LHDS6C 6
#define LHDS7R 3
#define LHDS7C 7
#define LHDS8R 2
#define LHDS8C 5
#define LHDS9R 4
#define LHDS9C 4
#define LHDS10R 5
#define LHDS10C 6
#define LHDS11R 7
#define LHDS11C 7
#define LHDS12R 6
#define LHDS12C 5
#define LHDS13R 7
#define LHDS13C 3
#define LHDS14R 6
#define LHDS14C 1
#define LHDS15R 4
#define LHDS15C 0
#define LHDS16R 5
#define LHDS16C 2

//Right-Hand Square System
#define RHSS1R 1
#define RHSS1C 0
#define RHSS2R 5
#define RHSS2C 1
#define RHSS3R 2
#define RHSS3C 3
#define RHSS4R 0
#define RHSS4C 2
#define RHSS5R 1
#define RHSS5C 4
#define RHSS6R 0
#define RHSS6C 6
#define RHSS7R 2
#define RHSS7C 7
#define RHSS8R 3
#define RHSS8C 5
#define RHSS9R 5
#define RHSS9C 4
#define RHSS10R 4
#define RHSS10C 6
#define RHSS11R 6
#define RHSS11C 7
#define RHSS12R 7
#define RHSS12C 5
#define RHSS13R 6
#define RHSS13C 3
#define RHSS14R 7
#define RHSS14C 1
#define RHSS15R 5
#define RHSS15C 0
#define RHSS16R 4
#define RHSS16C 2

int displayGird[8][8] = {0};
int count = 1;
int row = 0;
int col = 0;
int isLHDSDone = 0;
int isRHDSDone = 0;
int isLHSSDone = 0;
int isRHSSDone = 0;

void display();
void selectSystem();
void LHDS();
void RHDS();
void LHSS();
void RHSS();
void switcher();
void doMove(int pattern);

void main()
{
	printf("\nStarting Postion");
	printf("\nRow: ");
	scanf("%d", &row);
	printf("\nCol: ");
	scanf("%d", &col);

    displayGird[row-1][col-1] = count;

	while(count < 8 * 8)
	{
		display();
		getch();
		selectSystem();
	}
}

void selectSystem()
{
    //Detect For Left-Hand Diamond System
    if(((row == 1)&&((col == 1)||(col == 5)))||
       ((row == 2)&&((col == 3)||(col == 7)))||
       ((row == 3)&&((col == 2)||(col == 6)))||
       ((row == 4)&&((col == 4)||(col == 8)))||
       ((row == 5)&&((col == 1)||(col == 5)))||
       ((row == 6)&&((col == 3)||(col == 7)))||
       ((row == 7)&&((col == 2)||(col == 6)))||
       ((row == 8)&&((col == 4)||(col == 8))))
    {
        LHDS();
    }
    //Detect For Right-Hand Diamond System
    if(((row == 1)&&((col == 4)||(col == 8)))||
       ((row == 2)&&((col == 2)||(col == 6)))||
       ((row == 3)&&((col == 3)||(col == 7)))||
       ((row == 4)&&((col == 1)||(col == 5)))||
       ((row == 5)&&((col == 4)||(col == 8)))||
       ((row == 6)&&((col == 2)||(col == 6)))||
       ((row == 7)&&((col == 3)||(col == 7)))||
       ((row == 8)&&((col == 1)||(col == 5))))
    {
        RHDS();
    }

    //Detect For Left-Hand Square System
    if(((row == 1)&&((col == 2)||(col == 6)))||
       ((row == 2)&&((col == 4)||(col == 8)))||
       ((row == 3)&&((col == 1)||(col == 5)))||
       ((row == 4)&&((col == 3)||(col == 7)))||
       ((row == 5)&&((col == 2)||(col == 6)))||
       ((row == 6)&&((col == 4)||(col == 8)))||
       ((row == 7)&&((col == 1)||(col == 5)))||
       ((row == 8)&&((col == 3)||(col == 7))))
    {
        LHSS();
    }

    //Detect For Right-Hand Square System
    if(((row == 1)&&((col == 3)||(col == 7)))||
       ((row == 2)&&((col == 1)||(col == 5)))||
       ((row == 3)&&((col == 4)||(col == 8)))||
       ((row == 4)&&((col == 2)||(col == 6)))||
       ((row == 5)&&((col == 3)||(col == 7)))||
       ((row == 6)&&((col == 1)||(col == 5)))||
       ((row == 7)&&((col == 4)||(col == 8)))||
       ((row == 8)&&((col == 2)||(col == 6))))
    {
        RHSS();
    }

}

void LHDS()
{
    int quadrant;
    int beforeCount = count;
    int pattern = 0;

    while(count != beforeCount + 15)
    {
        if((row <= 4)&&(col <= 4))
            quadrant = 1;
        else if((row <= 4)&&(col >= 5))
            quadrant = 2;
        else if((row >= 5)&&(col <= 4))
            quadrant = 3;
        else if((row >= 5)&&(col >= 5))
            quadrant = 4;

        if(quadrant == 1)
        {
            if((row == 1)&&(col == 1)) //LHDS N1
            {
                if(displayGird[LHDS2R][LHDS2C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS4R][LHDS4C] == 0)
                    pattern = 2;
            }
            else if((row == 3)&&(col == 2))//LHDS N2
            {
                if(displayGird[LHDS1R][LHDS1C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS3R][LHDS3C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS15R][LHDS15C] == 0)
                    pattern = 7;
            }
            else if((row == 4)&&(col == 4))//LHDS N3
            {
                if(displayGird[LHDS4R][LHDS4C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS2R][LHDS2C] == 0)
                    pattern = 7;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 6;
                else if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 7;
            }
            else if((row == 2)&&(col == 3))//LHDS N4
            {
                if(displayGird[LHDS1R][LHDS1C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS3R][LHDS3C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS5R][LHDS5C] == 0)
                    pattern = 6;
            }
        }
        else if(quadrant == 2)
        {
            if((row == 1)&&(col == 5)) //LHDS N5
            {
                if(displayGird[LHDS6R][LHDS6C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS4R][LHDS4C] == 0)
                    pattern = 5;
            }
            else if((row == 2)&&(col == 7))//LHDS N6
            {
                if(displayGird[LHDS7R][LHDS7C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS5R][LHDS5C] == 0)
                    pattern = 4;
            }
            else if((row == 4)&&(col == 8))//LHDS N7
            {
                if(displayGird[LHDS6R][LHDS6C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS10R][LHDS10C] == 0)
                    pattern = 7;
            }
            else if((row == 3)&&(col == 6))//LHDS N8
            {
                if(displayGird[LHDS5R][LHDS5C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS7R][LHDS7C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS9R][LHDS9C] == 0)
                    pattern = 7;
                else if(displayGird[LHDS3R][LHDS3C] == 0)
                    pattern = 5;
            }
        }
        else if(quadrant == 3)
        {
            if((row == 8)&&(col == 4)) //LHDS N13
            {
                if(displayGird[LHDS14R][LHDS14C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS12R][LHDS12C] == 0)
                    pattern = 6;
            }
            else if((row == 7)&&(col == 2))//LHDS N14
            {
                if(displayGird[LHDS15R][LHDS15C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS13R][LHDS13C] == 0)
                    pattern = 2;
            }
            else if((row == 5)&&(col == 1))//LHDS N15
            {
                if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS14R][LHDS14C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS2R][LHDS2C] == 0)
                    pattern = 8;
            }
            else if((row == 6)&&(col == 3))//LHDS N16
            {
                if(displayGird[LHDS13R][LHDS13C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS15R][LHDS15C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS9R][LHDS9C] == 0)
                    pattern = 6;
            }
        }
        else if(quadrant == 4)
        {
            if((row == 5)&&(col == 5)) //LHDS N9
            {
                if(displayGird[LHDS10R][LHDS10C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS12R][LHDS12C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 5;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 8;
            }
            else if((row == 6)&&(col == 7))//LHDS N10
            {
                if(displayGird[LHDS11R][LHDS11C] == 0)
                    pattern = 1;
				else if(displayGird[LHDS9R][LHDS9C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS7R][LHDS7C] == 0)
                    pattern = 8;
            }
            else if((row == 8)&&(col == 8))//LHDS N11
            {
                if(displayGird[LHDS10R][LHDS10C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS12R][LHDS12C] == 0)
                    pattern = 4;
            }
            else if((row == 7)&&(col == 6))//LHDS N12
            {
                if(displayGird[LHDS11R][LHDS11C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS9R][LHDS9C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS13R][LHDS13C] == 0)
                    pattern = 5;
            }
        }
        doMove(pattern);
        getch();
    }
    isLHDSDone = 1;
}

void RHDS()
{
    int quadrant;
    if((row <= 4)&&(col <= 4))
        quadrant = 1;
    else if((row <= 4)&&(col > 5))
        quadrant = 2;
    else if((row > 5)&&(col <= 4))
        quadrant = 3;
    else if((row > 5)&&(col > 5))
        quadrant = 4;
}

void LHSS()
{
    int quadrant;
    if((row <= 4)&&(col <= 4))
        quadrant = 1;
    else if((row <= 4)&&(col > 5))
        quadrant = 2;
    else if((row > 5)&&(col <= 4))
        quadrant = 3;
    else if((row > 5)&&(col > 5))
        quadrant = 4;
}

void RHSS()
{
    int quadrant;
    int beforeCount = count;
    int pattern = 0;

    while(count != beforeCount + 15)
    {
        if((row <= 4)&&(col <= 4))
            quadrant = 1;
        else if((row <= 4)&&(col >= 5))
            quadrant = 2;
        else if((row >= 5)&&(col <= 4))
            quadrant = 3;
        else if((row >= 5)&&(col >= 5))
            quadrant = 4;

        if(quadrant == 1)
        {
            if((row == 2)&&(col == 1)) //RHSS N1
            {
                if(displayGird[RHSS2R][RHSS2C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS4R][RHSS4C] == 0)
                    pattern = 6;
            }
            else if((row == 4)&&(col == 2))//RHSS N2
            {
                if(displayGird[RHSS1R][RHSS1C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS3R][RHSS3C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS15R][RHSS15C] == 0)
                    pattern = 7;
            }
            else if((row == 3)&&(col == 4))//RHSS N3
            {
                if(displayGird[RHSS4R][RHSS4C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS2R][RHSS2C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 2;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 7;
            }
            else if((row == 1)&&(col == 3))//RHSS N4
            {
                if(displayGird[RHSS1R][RHSS1C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS3R][RHSS3C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS5R][RHSS5C] == 0)
                    pattern = 2;
            }
        }
        else if(quadrant == 2)
        {
            if((row == 2)&&(col == 5)) //RHSS N5
            {
                if(displayGird[RHSS6R][RHSS6C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS4R][RHSS4C] == 0)
                    pattern = 4;
            }
            else if((row == 2)&&(col == 7))//RHSS N6
            {
                if(displayGird[RHSS7R][RHSS7C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS5R][RHSS5C] == 0)
                    pattern = 5;
            }
            else if((row == 4)&&(col == 8))//RHSS N7
            {
                if(displayGird[RHSS6R][RHSS6C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 4;
                else if(displayGird[RHSS10R][RHSS10C] == 0)
                    pattern = 7;
            }
            else if((row == 3)&&(col == 6))//RHSS N8
            {
                if(displayGird[RHSS5R][RHSS5C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS7R][RHSS7C] == 0)
                    pattern = 2;
                else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 7;
                else if(displayGird[RHSS3R][RHSS3C] == 0)
                    pattern = 5;
            }
        }
        else if(quadrant == 3)
        {
            if((row == 8)&&(col == 4)) //RHSS N13
            {
                if(displayGird[RHSS14R][RHSS14C] == 0)
                    pattern = 4;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS12R][RHSS12C] == 0)
                    pattern = 6;
            }
            else if((row == 7)&&(col == 2))//RHSS N14
            {
                if(displayGird[RHSS15R][RHSS15C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS13R][RHSS13C] == 0)
                    pattern = 2;
            }
            else if((row == 5)&&(col == 1))//RHSS N15
            {
                if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 2;
                else if(displayGird[RHSS14R][RHSS14C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS2R][RHSS2C] == 0)
                    pattern = 8;
            }
            else if((row == 6)&&(col == 3))//RHSS N16
            {
                if(displayGird[RHSS13R][RHSS13C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS15R][RHSS15C] == 0)
                    pattern = 4;
                else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 6;
            }
        }
        else if(quadrant == 4)
        {
            if((row == 5)&&(col == 5)) //RHSS N9
            {
                if(displayGird[RHSS10R][RHSS10C] == 0)
                    pattern = 2;
                else if(displayGird[RHSS12R][RHSS12C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 8;
            }
            else if((row == 6)&&(col == 7))//RHSS N10
            {
                if(displayGird[RHSS11R][RHSS11C] == 0)
                    pattern = 1;
				else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 4;
                else if(displayGird[RHSS7R][RHSS7C] == 0)
                    pattern = 8;
            }
            else if((row == 8)&&(col == 8))//RHSS N11
            {
                if(displayGird[RHSS10R][RHSS10C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS12R][RHSS12C] == 0)
                    pattern = 4;
            }
            else if((row == 7)&&(col == 6))//RHSS N12
            {
                if(displayGird[RHSS11R][RHSS11C] == 0)
                    pattern = 2;
                else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS13R][RHSS13C] == 0)
                    pattern = 5;
            }
        }
	}
}

void switcher()
{


}

void doMove(int pattern)
{
    if(pattern == 1)
    {
            row = row + 2;
            col = col + 1;
            count++;
            displayGird[row-1][col-1] = count;
            display();
    }
    else if(pattern == 2)
    {
        row = row + 1;
        col = col + 2;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
    else if(pattern == 3)
    {
        row = row - 2;
        col = col - 1;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
    else if(pattern == 4)
    {
        row = row - 1;
        col = col - 2;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
    else if(pattern == 5)
    {
        row = row + 1;
        col = col - 2;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
    else if(pattern == 6)
    {
        row = row - 1;
        col = col + 2;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
    else if(pattern == 7)
    {
        row = row + 2;
        col = col - 1;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
    else if(pattern == 8)
    {
        row = row - 2;
        col = col + 1;
        count++;
        displayGird[row-1][col-1] = count;
        display();
    }
}

void display()
{
	int i = 0,j = 0;
	int Char = 65;
	printf("  ");
	for(i = 0; i < 8; i++)
	{
		printf("%c ", Char);
		Char = Char + 1;
	}
	printf("\n");
	for(i = 0; i < 8; i++)
	{
		printf("%d ", i+1);
		for(j = 0; j < 8; j++)
		{
			printf("%d ", displayGird[i][j]);
		}
		printf("\n");
	}
}
