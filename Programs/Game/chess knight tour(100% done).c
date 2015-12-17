/*
    @author:    John V. Neijzen
    @activity:  1 - Narcissistic Numbers
    @section:   CSA 12 A
    @version:   0.10
    @Change-logs:
        0.01 - First Draft
        0.02 - Adding Pattern Move
        0.03 - adding first 2 system and display tweak
        0.04 - adding third system
        0.05 - bug fixing in all 3 system
        0.05a - add define code in place of writing row = something and col = something
        0.05b - change system checker to use new define code.
        0.06 - remove useless code
        0.07 - adding 4 system
        0.08 - adding switcher
        0.09 - Fixing Systems and fix some define code
        0.10 - Fully working not 100% tested
*/

/*
    Create a C program that solve Chess Knight Tour with one user input,
*/
#include <stdio.h>

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

//Left-Hand Square System
#define LHSS1R 0
#define LHSS1C 1
#define LHSS2R 2
#define LHSS2C 0
#define LHSS3R 3
#define LHSS3C 2
#define LHSS4R 1
#define LHSS4C 3
#define LHSS5R 0
#define LHSS5C 5
#define LHSS6R 1
#define LHSS6C 7
#define LHSS7R 3
#define LHSS7C 6
#define LHSS8R 2
#define LHSS8C 4
#define LHSS9R 4
#define LHSS9C 5
#define LHSS10R 5
#define LHSS10C 7
#define LHSS11R 7
#define LHSS11C 6
#define LHSS12R 6
#define LHSS12C 4
#define LHSS13R 7
#define LHSS13C 2
#define LHSS14R 6
#define LHSS14C 0
#define LHSS15R 4
#define LHSS15C 1
#define LHSS16R 5
#define LHSS16C 3

//Right-Hand Square System
#define RHSS1R 1
#define RHSS1C 0
#define RHSS2R 3
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

//Right-Hand Diamond System -TODO
#define RHDS1R 3
#define RHDS1C 0
#define RHDS2R 1
#define RHDS2C 1
#define RHDS3R 0
#define RHDS3C 3
#define RHDS4R 2
#define RHDS4C 2
#define RHDS5R 3
#define RHDS5C 4
#define RHDS6R 1
#define RHDS6C 5
#define RHDS7R 0
#define RHDS7C 7
#define RHDS8R 2
#define RHDS8C 6
#define RHDS9R 4
#define RHDS9C 7
#define RHDS10R 6
#define RHDS10C 6
#define RHDS11R 7
#define RHDS11C 4
#define RHDS12R 5
#define RHDS12C 5
#define RHDS13R 4
#define RHDS13C 3
#define RHDS14R 6
#define RHDS14C 2
#define RHDS15R 7
#define RHDS15C 0
#define RHDS16R 5
#define RHDS16C 1

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

    row = row - 1;
    col = col - 1;

    displayGird[row][col] = count;

	while(count < 64)
	{
		display();
		selectSystem();
	}
}

void selectSystem()
{
    //Detect For Left-Hand Diamond System
    if(((row == LHDS1R)&&(col == LHDS1C))||((row == LHDS2R)&&(col == LHDS2C))||((row == LHDS3R)&&(col == LHDS3C))||((row == LHDS4R)&&(col == LHDS4C))||
       ((row == LHDS5R)&&(col == LHDS5C))||((row == LHDS6R)&&(col == LHDS6C))||((row == LHDS7R)&&(col == LHDS7C))||((row == LHDS8R)&&(col == LHDS8C))||
       ((row == LHDS9R)&&(col == LHDS9C))||((row ==LHDS10R)&&(col ==LHDS10C))||((row ==LHDS11R)&&(col ==LHDS11C))||((row ==LHDS12R)&&(col ==LHDS12C))||
       ((row ==LHDS13R)&&(col ==LHDS13C))||((row ==LHDS14R)&&(col ==LHDS14C))||((row ==LHDS15R)&&(col ==LHDS15C))||((row ==LHDS16R)&&(col ==LHDS16C)))
    {
            LHDS();
    }
    //Detect For Right-Hand Diamond System
    if(((row == RHDS1R)&&(col == RHDS1C))||((row == RHDS2R)&&(col == RHDS2C))||((row == RHDS3R)&&(col == RHDS3C))||((row == RHDS4R)&&(col == RHDS4C))||
       ((row == RHDS5R)&&(col == RHDS5C))||((row == RHDS6R)&&(col == RHDS6C))||((row == RHDS7R)&&(col == RHDS7C))||((row == RHDS8R)&&(col == RHDS8C))||
       ((row == RHDS9R)&&(col == RHDS9C))||((row ==RHDS10R)&&(col ==RHDS10C))||((row ==RHDS11R)&&(col ==RHDS11C))||((row ==RHDS12R)&&(col ==RHDS12C))||
       ((row ==RHDS13R)&&(col ==RHDS13C))||((row ==RHDS14R)&&(col ==RHDS14C))||((row ==RHDS15R)&&(col ==RHDS15C))||((row ==RHDS16R)&&(col ==RHDS16C)))
    {
            RHDS();
    }
    //Detect For Left-Hand Square System
    if(((row == LHSS1R)&&(col == LHSS1C))||((row == LHSS2R)&&(col == LHSS2C))||((row == LHSS3R)&&(col == LHSS3C))||((row == LHSS4R)&&(col == LHSS4C))||
       ((row == LHSS5R)&&(col == LHSS5C))||((row == LHSS6R)&&(col == LHSS6C))||((row == LHSS7R)&&(col == LHSS7C))||((row == LHSS8R)&&(col == LHSS8C))||
       ((row == LHSS9R)&&(col == LHSS9C))||((row ==LHSS10R)&&(col ==LHSS10C))||((row ==LHSS11R)&&(col ==LHSS11C))||((row ==LHSS12R)&&(col ==LHSS12C))||
       ((row ==LHSS13R)&&(col ==LHSS13C))||((row ==LHSS14R)&&(col ==LHSS14C))||((row ==LHSS15R)&&(col ==LHSS15C))||((row ==LHSS16R)&&(col ==LHSS16C)))
    {
            LHSS();
    }

    //Detect For Right-Hand Square System
    if(((row == RHSS1R)&&(col == RHSS1C))||((row == RHSS2R)&&(col == RHSS2C))||((row == RHSS3R)&&(col == RHSS3C))||((row == RHSS4R)&&(col == RHSS4C))||
       ((row == RHSS5R)&&(col == RHSS5C))||((row == RHSS6R)&&(col == RHSS6C))||((row == RHSS7R)&&(col == RHSS7C))||((row == RHSS8R)&&(col == RHSS8C))||
       ((row == RHSS9R)&&(col == RHSS9C))||((row ==RHSS10R)&&(col ==RHSS10C))||((row ==RHSS11R)&&(col ==RHSS11C))||((row ==RHSS12R)&&(col ==RHSS12C))||
       ((row ==RHSS13R)&&(col ==RHSS13C))||((row ==RHSS14R)&&(col ==RHSS14C))||((row ==RHSS15R)&&(col ==RHSS15C))||((row ==RHSS16R)&&(col ==RHSS16C)))
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
        if((row <= 3)&&(col <= 3))
            quadrant = 1;
        else if((row <= 3)&&(col >= 4))
            quadrant = 2;
        else if((row >= 4)&&(col <= 3))
            quadrant = 3;
        else if((row >= 4)&&(col >= 4))
            quadrant = 4;

        if(quadrant == 1)
        {
            if((row == LHDS1R)&&(col == LHDS1C)) //LHDS N1
            {
                if(displayGird[LHDS2R][LHDS2C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS4R][LHDS4C] == 0)
                    pattern = 2;
            }
            else if((row == LHDS2R)&&(col == LHDS2C))//LHDS N2
            {
                if(displayGird[LHDS1R][LHDS1C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS3R][LHDS3C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS15R][LHDS15C] == 0)
                    pattern = 7;
            }
            else if((row == LHDS3R)&&(col == LHDS3C))//LHDS N3
            {
                if(displayGird[LHDS2R][LHDS2C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS4R][LHDS4C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 6;
                else if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 7;
            }
            else if((row == LHDS4R)&&(col == LHDS4C))//LHDS N4
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
            if((row == LHDS5R)&&(col == LHDS5C)) //LHDS N5
            {
                if(displayGird[LHDS6R][LHDS6C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS4R][LHDS4C] == 0)
                    pattern = 5;
            }
            else if((row == LHDS6R)&&(col == LHDS6C))//LHDS N6
            {
                if(displayGird[LHDS5R][LHDS5C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS7R][LHDS7C] == 0)
                    pattern = 1;
            }
            else if((row == LHDS7R)&&(col == LHDS7C))//LHDS N7
            {
                if(displayGird[LHDS6R][LHDS6C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS8R][LHDS8C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS10R][LHDS10C] == 0)
                    pattern = 7;
            }
            else if((row == LHDS8R)&&(col == LHDS8C))//LHDS N8
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
            if((row == LHDS13R)&&(col == LHDS13C)) //LHDS N13
            {
                if(displayGird[LHDS14R][LHDS14C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS12R][LHDS12C] == 0)
                    pattern = 6;
            }
            else if((row == LHDS14R)&&(col == LHDS14C))//LHDS N14
            {
                if(displayGird[LHDS13R][LHDS13C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS15R][LHDS15C] == 0)
                    pattern = 3;
            }
            else if((row == LHDS15R)&&(col == LHDS15C))//LHDS N15
            {
                if(displayGird[LHDS14R][LHDS14C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS16R][LHDS16C] == 0)
                    pattern = 2;
                else if(displayGird[LHDS2R][LHDS2C] == 0)
                    pattern = 8;
            }
            else if((row == LHDS16R)&&(col == LHDS16C))//LHDS N16
            {
                if(displayGird[LHDS13R][LHDS13C] == 0)
                    pattern = 1;
                else if(displayGird[LHDS15R][LHDS15C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS3R][LHDS3C] == 0)
                    pattern = 8;
                else if(displayGird[LHDS9R][LHDS9C] == 0)
                    pattern = 6;

            }
        }
        else if(quadrant == 4)
        {
            if((row == LHDS9R)&&(col == LHDS9C)) //LHDS N9
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
            else if((row == LHDS10R)&&(col == LHDS10C))//LHDS N10
            {
                if(displayGird[LHDS11R][LHDS11C] == 0)
                    pattern = 1;
				else if(displayGird[LHDS9R][LHDS9C] == 0)
                    pattern = 4;
                else if(displayGird[LHDS7R][LHDS7C] == 0)
                    pattern = 8;
            }
            else if((row == LHDS11R)&&(col == LHDS11C))//LHDS N11
            {
                if(displayGird[LHDS10R][LHDS10C] == 0)
                    pattern = 3;
                else if(displayGird[LHDS12R][LHDS12C] == 0)
                    pattern = 4;
            }
            else if((row == LHDS12R)&&(col == LHDS12C))//LHDS N12
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
    }
    isLHDSDone = 1;
    switcher();
}

void RHDS()
{
    int quadrant;
    int beforeCount = count;
    int pattern = 0;

    while(count != beforeCount + 15)
    {
        if((row <= 3)&&(col <= 3))
            quadrant = 1;
        else if((row <= 3)&&(col >= 4))
            quadrant = 2;
        else if((row >= 4)&&(col <= 3))
            quadrant = 3;
        else if((row >= 4)&&(col >= 4))
            quadrant = 4;

        if(quadrant == 1)
        {
            if((row == RHDS1R)&&(col == RHDS1C)) //RHDS N1
            {
                if(displayGird[RHDS2R][RHDS2C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS4R][RHDS4C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS16R][RHDS16C] == 0)
                    pattern = 1;
            }
            else if((row == RHDS2R)&&(col == RHDS2C))//RHDS N2
            {
                if(displayGird[RHDS1R][RHDS1C] == 0)
                    pattern = 7;
                else if(displayGird[RHDS3R][RHDS3C] == 0)
                    pattern = 6;
            }
            else if((row == RHDS3R)&&(col == RHDS3C))//RHDS N3
            {
                if(displayGird[RHDS2R][RHDS2C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS4R][RHDS4C] == 0)
                    pattern = 7;
                else if(displayGird[RHDS6R][RHDS6C] == 0)
                    pattern = 2;
            }
            else if((row == RHDS4R)&&(col == RHDS4C))//RHDS N4
            {
                if(displayGird[RHDS1R][RHDS1C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS3R][RHDS3C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS5R][RHDS5C] == 0)
                    pattern = 2;
                else if(displayGird[RHDS13R][RHDS13C] == 0)
                    pattern = 1;
            }
        }
        else if(quadrant == 2)
        {
            if((row == RHDS5R)&&(col == RHDS5C))//RHDS N5
            {
                if(displayGird[RHDS6R][RHDS6C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS8R][RHDS8C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS12R][RHDS12C] == 0)
                    pattern = 1;
                else if(displayGird[RHDS4R][RHDS4C] == 0)
                    pattern = 4;
            }
            else if((row == RHDS6R)&&(col == RHDS6C))//RHDS N6
            {
                if(displayGird[RHDS7R][RHDS7C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS5R][RHDS5C] == 0)
                    pattern = 7;
            }
            else if((row == RHDS7R)&&(col == RHDS7C))//RHDS N7
            {
                if(displayGird[RHDS6R][RHDS6C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS8R][RHDS8C] == 0)
                    pattern = 7;
            }
            else if((row == RHDS8R)&&(col == RHDS8C))//RHDS N8
            {
                if(displayGird[RHDS7R][RHDS7C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS5R][RHDS5C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS9R][RHDS9C] == 0)
                    pattern = 1;
            }
        }
        else if(quadrant == 3)
        {
            if((row == RHDS13R)&&(col == RHDS13C))//RHDS N13
            {
                if(displayGird[RHDS14R][RHDS14C] == 0)
                    pattern = 7;
                else if(displayGird[RHDS16R][RHDS16C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS4R][RHDS4C] == 0)
                    pattern = 3;
                else if(displayGird[RHDS12R][RHDS12C] == 0)
                    pattern = 2;
            }
            else if((row == RHDS14R)&&(col == RHDS14C))//RHDS N14
            {
                if(displayGird[RHDS15R][RHDS15C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS13R][RHDS13C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS11R][RHDS11C] == 0)
                    pattern = 2;
            }
            else if((row == RHDS15R)&&(col == RHDS15C))//RHDS N15
            {
                if(displayGird[RHDS14R][RHDS14C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS16R][RHDS16C] == 0)
                    pattern = 8;

            }
            else if((row == RHDS16R)&&(col == RHDS16C))//RHDS N16
            {
                if(displayGird[RHDS15R][RHDS15C] == 0)
                    pattern = 7;
                else if(displayGird[RHDS13R][RHDS13C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS1R][RHDS1C] == 0)
                    pattern = 3;
            }
        }
        else if(quadrant == 4)
        {
            if((row == RHDS9R)&&(col == RHDS9C))//RHDS N9
            {
                if(displayGird[RHDS10R][RHDS10C] == 0)
                    pattern = 7;
                else if(displayGird[RHDS12R][RHDS12C] == 0)
                    pattern = 5;
                else if(displayGird[RHDS8R][RHDS8C] == 0)
                    pattern = 3;
            }
            else if((row == RHDS10R)&&(col == RHDS10C))//RHDS N10
            {
                if(displayGird[RHDS9R][RHDS9C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS11R][RHDS11C] == 0)
                    pattern = 5;
            }
            else if((row == RHDS11R)&&(col == RHDS11C))//RHDS N11
            {
                if(displayGird[RHDS10R][RHDS10C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS12R][RHDS12C] == 0)
                    pattern = 8;
                else if(displayGird[RHDS14R][RHDS14C] == 0)
                    pattern = 4;
            }
            else if((row == RHDS12R)&&(col == RHDS12C))//RHDS N12
            {
                if(displayGird[RHDS9R][RHDS9C] == 0)
                    pattern = 6;
                else if(displayGird[RHDS11R][RHDS11C] == 0)
                    pattern = 7;
                else if(displayGird[RHDS13R][RHDS13C] == 0)
                    pattern = 4;
                else if(displayGird[RHDS5R][RHDS5C] == 0)
                    pattern = 3;
            }
        }
        doMove(pattern);
    }
    isRHDSDone = 1;
    switcher();
}

void LHSS()
{
    int quadrant;
    int beforeCount = count;
    int pattern = 0;

    while(count != beforeCount + 15)
    {
        if((row <= 3)&&(col <= 3))
            quadrant = 1;
        else if((row <= 3)&&(col >= 4))
            quadrant = 2;
        else if((row >= 4)&&(col <= 3))
            quadrant = 3;
        else if((row >= 4)&&(col >= 4))
            quadrant = 4;

        if(quadrant == 1)
        {
            if((row == LHSS1R)&&(col == LHSS1C)) //LHSS N1
            {
                if(displayGird[LHSS2R][LHSS2C] == 0)
                    pattern = 7;
                else if(displayGird[LHSS4R][LHSS4C] == 0)
                    pattern = 2;
            }
            else if((row == LHSS2R)&&(col == LHSS2C))//LHSS N2
            {
                if(displayGird[LHSS1R][LHSS1C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS3R][LHSS3C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS15R][LHSS15C] == 0)
                    pattern = 1;
            }
            else if((row == LHSS3R)&&(col == LHSS3C))//LHSS N3
            {
                if(displayGird[LHSS2R][LHSS2C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS4R][LHSS4C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS8R][LHSS8C] == 0)
                    pattern = 6;
                else if(displayGird[LHSS16R][LHSS16C] == 0)
                    pattern = 1;
            }
            else if((row == LHSS4R)&&(col == LHSS4C))//LHSS N4
            {
                if(displayGird[LHSS1R][LHSS1C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS3R][LHSS3C] == 0)
                    pattern = 7;
                else if(displayGird[LHSS5R][LHSS5C] == 0)
                    pattern = 6;
            }
        }
        else if(quadrant == 2)
        {
            if((row == LHSS5R)&&(col == LHSS5C)) //LHSS N5
            {
                if(displayGird[LHSS6R][LHSS6C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS8R][LHSS8C] == 0)
                    pattern = 7;
                else if(displayGird[LHSS4R][LHSS4C] == 0)
                    pattern = 5;
            }
            else if((row == LHSS6R)&&(col == LHSS6C))//LHSS N6
            {
                if(displayGird[LHSS5R][LHSS5C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS7R][LHSS7C] == 0)
                    pattern = 7;

            }
            else if((row == LHSS7R)&&(col == LHSS7C))//LHSS N7
            {
                if(displayGird[LHSS6R][LHSS6C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS8R][LHSS8C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS10R][LHSS10C] == 0)
                    pattern = 1;
            }
            else if((row == LHSS8R)&&(col == LHSS8C))//LHSS N8
            {
                if(displayGird[LHSS5R][LHSS5C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS7R][LHSS7C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS9R][LHSS9C] == 0)
                    pattern = 1;
                else if(displayGird[LHSS3R][LHSS3C] == 0)
                    pattern = 5;
            }
        }
        else if(quadrant == 3)
        {
            if((row == LHSS13R)&&(col == LHSS13C))//LHSS N13
            {
                if(displayGird[LHSS14R][LHSS14C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS16R][LHSS16C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS12R][LHSS12C] == 0)
                    pattern = 6;
            }
            else if((row == LHSS14R)&&(col == LHSS14C))//LHSS N14
            {
                if(displayGird[LHSS13R][LHSS13C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS15R][LHSS15C] == 0)
                    pattern = 8;

            }
            else if((row == LHSS15R)&&(col == LHSS15C))//LHSS N15
            {
                if(displayGird[LHSS14R][LHSS14C] == 0)
                    pattern = 7;
                else if(displayGird[LHSS16R][LHSS16C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS2R][LHSS2C] == 0)
                    pattern = 3;
            }
            else if((row == LHSS16R)&&(col == LHSS16C))//LHSS N16
            {
                if(displayGird[LHSS13R][LHSS13C] == 0)
                    pattern = 7;
                else if(displayGird[LHSS15R][LHSS15C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS3R][LHSS3C] == 0)
                    pattern = 3;
                else if(displayGird[LHSS9R][LHSS9C] == 0)
                    pattern = 6;

            }
        }
        else if(quadrant == 4)
        {
            if((row == LHSS9R)&&(col == LHSS9C))//LHSS N9
            {
                if(displayGird[LHSS10R][LHSS10C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS12R][LHSS12C] == 0)
                    pattern = 7;
                else if(displayGird[LHSS16R][LHSS16C] == 0)
                    pattern = 5;
                else if(displayGird[LHSS8R][LHSS8C] == 0)
                    pattern = 3;
            }
            else if((row == LHSS10R)&&(col == LHSS10C))//LHSS N10
            {
                if(displayGird[LHSS11R][LHSS11C] == 0)
                    pattern = 7;
				else if(displayGird[LHSS9R][LHSS9C] == 0)
                    pattern = 4;
                else if(displayGird[LHSS7R][LHSS7C] == 0)
                    pattern = 3;
            }
            else if((row == LHSS11R)&&(col == LHSS11C))//LHSS N11
            {
                if(displayGird[LHSS10R][LHSS10C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS12R][LHSS12C] == 0)
                    pattern = 4;
            }
            else if((row == LHSS12R)&&(col == LHSS12C))//LHSS N12
            {
                if(displayGird[LHSS11R][LHSS11C] == 0)
                    pattern = 2;
                else if(displayGird[LHSS9R][LHSS9C] == 0)
                    pattern = 8;
                else if(displayGird[LHSS13R][LHSS13C] == 0)
                    pattern = 5;
            }
        }
        doMove(pattern);
    }
    isLHSSDone = 1;
    switcher();
}

void RHSS()
{

    int quadrant;
    int beforeCount = count;
    int pattern = 0;

    while(count != beforeCount + 15)
    {
        if((row <= 3)&&(col <= 3))
            quadrant = 1;
        else if((row <= 3)&&(col >= 4))
            quadrant = 2;
        else if((row >= 4)&&(col <= 3))
            quadrant = 3;
        else if((row >= 4)&&(col >= 4))
            quadrant = 4;

        if(quadrant == 1)
        {
            if((row == RHSS1R)&&(col == RHSS1C))//RHSS N1
            {
                if(displayGird[RHSS2R][RHSS2C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS4R][RHSS4C] == 0)
                    pattern = 6;
            }
            else if((row == RHSS2R)&&(col == RHSS2C))//RHSS N2
            {
                if(displayGird[RHSS1R][RHSS1C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS3R][RHSS3C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS15R][RHSS15C] == 0)
                    pattern = 7;
            }
            else if((row == RHSS3R)&&(col == RHSS3C))//RHSS N3
            {
                if(displayGird[RHSS2R][RHSS2C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS4R][RHSS4C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 2;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 7;
            }
            else if((row == RHSS4R)&&(col == RHSS4C))//RHSS N4
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
            if((row == RHSS5R)&&(col == RHSS5C))//RHSS N5
            {
                if(displayGird[RHSS6R][RHSS6C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS4R][RHSS4C] == 0)
                    pattern = 4;
            }
            else if((row == RHSS6R)&&(col == RHSS6C))//RHSS N6
            {
                if(displayGird[RHSS5R][RHSS5C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS7R][RHSS7C] == 0)
                    pattern = 1;

            }
            else if((row == RHSS7R)&&(col == RHSS7C))//RHSS N7
            {
                if(displayGird[RHSS6R][RHSS6C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS10R][RHSS10C] == 0)
                    pattern = 7;
            }
            else if((row == RHSS8R)&&(col == RHSS8C))//RHSS N8
            {
                if(displayGird[RHSS5R][RHSS5C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS7R][RHSS7C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 7;
                else if(displayGird[RHSS3R][RHSS3C] == 0)
                    pattern = 4;
            }
        }
        else if(quadrant == 3)
        {
            if((row == RHSS13R)&&(col == RHSS13C))//RHSS N13
            {
                if(displayGird[RHSS14R][RHSS14C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS12R][RHSS12C] == 0)
                    pattern = 2;
            }
            else if((row == RHSS14R)&&(col == RHSS14C))//RHSS N14
            {
                if(displayGird[RHSS13R][RHSS13C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS15R][RHSS15C] == 0)
                    pattern = 3;
            }
            else if((row == RHSS15R)&&(col == RHSS15C))//RHSS N15
            {
                if(displayGird[RHSS14R][RHSS14C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS2R][RHSS2C] == 0)
                    pattern = 8;
            }
            else if((row == RHSS16R)&&(col == RHSS16C))//RHSS N16
            {
                if(displayGird[RHSS13R][RHSS13C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS15R][RHSS15C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS3R][RHSS3C] == 0)
                    pattern = 8;
                else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 2;
            }
        }
        else if(quadrant == 4)
        {
            if((row == RHSS9R)&&(col == RHSS9C))//RHSS N9
            {
                if(displayGird[RHSS10R][RHSS10C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS12R][RHSS12C] == 0)
                    pattern = 1;
                else if(displayGird[RHSS16R][RHSS16C] == 0)
                    pattern = 4;
                else if(displayGird[RHSS8R][RHSS8C] == 0)
                    pattern = 8;
            }
            else if((row == RHSS10R)&&(col == RHSS10C))//RHSS N10
            {
                if(displayGird[RHSS11R][RHSS11C] == 0)
                    pattern = 1;
				else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 5;
                else if(displayGird[RHSS7R][RHSS7C] == 0)
                    pattern = 8;
            }
            else if((row == RHSS11R)&&(col == RHSS11C))//RHSS N11
            {
                if(displayGird[RHSS10R][RHSS10C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS12R][RHSS12C] == 0)
                    pattern = 5;
            }
            else if((row == RHSS12R)&&(col == RHSS12C))//RHSS N12
            {
                if(displayGird[RHSS11R][RHSS11C] == 0)
                    pattern = 6;
                else if(displayGird[RHSS9R][RHSS9C] == 0)
                    pattern = 3;
                else if(displayGird[RHSS13R][RHSS13C] == 0)
                    pattern = 4;

            }
        }
        doMove(pattern);
	}
	isRHSSDone = 1;
	switcher();
}

void switcher()
{
    int pattern = 0;
    if(isLHDSDone == 1)
    {
        if(isRHSSDone == 0)
        {
            if((row == LHDS3R)&&(col == LHDS3C))
                pattern = 7;
            else if((row == LHDS8R)&&(col == LHDS8C))
                pattern = 1;
            else if((row == LHDS12R)&&(col == LHDS12C))
                pattern = 8;
            else if((row == LHDS16R)&&(col == LHDS16C))
                pattern = 3;
        }
        else if(isLHSSDone == 0)
        {
            if((row == LHDS3R)&&(col == LHDS3C))
                pattern = 2;
            else if((row == LHDS7R)&&(col == LHDS7C))
                pattern = 5;
            else if((row == LHDS9R)&&(col == LHDS9C))
                pattern = 4;
            else if((row == LHDS15R)&&(col == LHDS15C))
                pattern = 6;
        }
    }

    if(isRHDSDone == 1)
    {
        if(isRHSSDone == 0)
        {
            if((row == RHDS4R)&&(col == RHDS4C))
                pattern = 6;
            else if((row == RHDS8R)&&(col == RHDS8C))
                pattern = 4;
            else if((row == RHDS12R)&&(col == RHDS12C))
                pattern = 2;
            else if((row == RHDS16R)&&(col == RHDS16C))
                pattern = 5;
        }
        else if(isLHSSDone == 0)
        {
            if((row == RHDS3R)&&(col == RHDS3C))
                pattern = 1;
            else if((row == RHDS5R)&&(col == RHDS5C))
                pattern = 7;
            else if((row == RHDS11R)&&(col == RHDS11C))
                pattern = 3;
            else if((row == RHDS13R)&&(col == RHDS13C))
                pattern = 8;
        }
    }

    if(isLHSSDone == 1)
    {
        if(isLHDSDone == 0)
        {
            if((row == LHSS3R)&&(col == LHSS3C))
                pattern = 2;
            else if((row == LHSS7R)&&(col == LHSS7C))
                pattern = 5;
            else if((row == LHSS9R)&&(col == LHSS9C))
                pattern = 4;
            else if((row == LHSS15R)&&(col == LHSS15C))
                pattern = 6;
        }
        else if(isRHDSDone == 0)
        {
            if((row == LHSS4R)&&(col == LHSS4C))
                pattern = 1;
            else if((row == LHSS8R)&&(col == LHSS8C))
                pattern = 7;
            else if((row == LHSS12R)&&(col == LHSS12C))
                pattern = 3;
            else if((row == LHSS16R)&&(col == LHSS16C))
                pattern = 8;
        }
    }

    if(isRHSSDone == 1)
    {
        if(isLHDSDone == 0)
        {
            if((row == RHSS4R)&&(col == RHSS4C))
                pattern = 7;
            else if((row == RHSS8R)&&(col == RHSS8C))
                pattern = 1;
            else if((row == RHSS16R)&&(col == RHSS16C))
                pattern = 3;
            else if((row == RHSS12R)&&(col == RHSS12C))
                pattern = 8;
        }
        else if(isRHDSDone == 0)
        {
            if((row == RHSS3R)&&(col == RHSS3C))
                pattern = 6;
            else if((row == RHSS7R)&&(col == RHSS7C))
                pattern = 4;
            else if((row == RHSS9R)&&(col == RHSS9C))
                pattern = 5;
            else if((row == RHSS15R)&&(col == RHSS15C))
                pattern = 2;
        }
    }
    doMove(pattern);
}

void doMove(int pattern)
{
    if(pattern == 1)
    {
        row = row + 2;
        col = col + 1;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 2)
    {
        row = row + 1;
        col = col + 2;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 3)
    {
        row = row - 2;
        col = col - 1;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 4)
    {
        row = row - 1;
        col = col - 2;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 5)
    {
        row = row + 1;
        col = col - 2;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 6)
    {
        row = row - 1;
        col = col + 2;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 7)
    {
        row = row + 2;
        col = col - 1;
        count++;
        displayGird[row][col] = count;
        display();
    }
    else if(pattern == 8)
    {
        row = row - 2;
        col = col + 1;
        count++;
        displayGird[row][col] = count;
        display();
    }
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
		printf("|", i+1);
		for(j = 0; j < 8; j++)
		{
		    if(displayGird[i][j] < 10)
                printf("0%d|", displayGird[i][j]);
            else
                printf("%d|", displayGird[i][j]);
		}
		printf("\n");
	}
}
