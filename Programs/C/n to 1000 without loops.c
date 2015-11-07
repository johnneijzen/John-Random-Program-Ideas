/*
    @author:    John V. Neijzen
    @activity:  2 - N to 1000
    @section:   CSA 12 A
    @version:   0.1
*/

/*
    Create a program that asks a user for a positive integer less than 1,000.
    And without using a loop, print all integers from the given input to 1,000.
*/

#include <stdio.h>

// Function Prototype
void getNumberTill1000(int a);

void main()
{
    //Input
    int userInput = 0;
    printf("This program will print from your number to 1000.");
    printf("Please Enter Number that is less than 1000. : ");
    scanf("%d", &userInput);

    // Process/Output
    getNumberTill1000(userInput);
}

void getNumberTill1000(int a)
{
    if (a<=1000)
    {
        printf("%d \n", a);
        getNumberTill1000(a + 1);
    }
    else if (a != 1001)
    {
        printf("Error");
    }
}
