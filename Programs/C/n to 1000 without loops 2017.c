/*
The MIT License (MIT)

Copyright (c) 2017 John Neijzen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
    @author:    John V. Neijzen
    @activity:  2 - N to 1000
    @section:   CSA 12 A
    @version:   0.2 7/14/2017
*/

/*
    Create a program that asks a user for a positive integer less than 1,000.
    And without using a loop, print all integers from the given input to 1,000.
*/

#include <stdio.h>

// Function Prototype
void getNumberTill1000(int a);

int main()
{
    // Input
    int userInput = 0;
    printf("This program will print from your number to 1000.");
    do
    {
        printf("\nPlease Enter Number that is less than 1000. : ");
        scanf("%d", &userInput);
    } while (userInput >= 1000);
    
    // Process/Output
    getNumberTill1000(userInput);

    return 0;
}

/*
    Function:  getNumberTill1000

    Its used int a aka userInput as a base number then using if condition check
    if userInput is less than 1000 then if it is less than 1000 then it
    print number it on then add 1 to variable a then it redo function
    aka recursion till it 1000 then function break goes back main loop

    Note: Negative Number will work too.
*/
void getNumberTill1000(int a)
{
    if (a<=1000)
    {
        printf("%d \n", a);
        getNumberTill1000(a + 1);
    }
}
