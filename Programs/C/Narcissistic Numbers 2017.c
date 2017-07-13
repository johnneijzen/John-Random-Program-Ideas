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
    @activity:  1 - Narcissistic Numbers
    @section:   CSA 12 A
    @version:   0.1
*/

/*
    Create a C program that asks for an integer from the user.
    Use a function that will determine whether the integer given by the user is narcissistic or not.
*/

#include <stdio.h>

int numPlaces (int n);
int narcissisticNumbers(int userInput, int digit);
int power(int rem, int digit);

void main()
{
    int userInput = 0; // User Input
    int digit = 0; // Number of digits
    int isItNarcissisticNumber = 0; // Used store condition with function narcissisticNumbers 1 == True 0 == False

    do {
        printf("\nNote: To Exit Program type 0 ");
        printf("\nEnter number: ");
        scanf("%d", &userInput);
        if(userInput != 0)
        {
            digit = numPlaces(userInput);
            isItNarcissisticNumber = narcissisticNumbers(userInput, digit);
            if(isItNarcissisticNumber == 1)
                printf("%d is Narcissistic\n", userInput);
            else
                printf("%d is Not Narcissistic\n", userInput);
        }
    } while(userInput != 0); // Loop ends till user type 0;
}

/*
    Function: numPlaces

    Used to check how many digits place there are.
*/

int numPlaces (int n) {
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
}

/*
    Function: power

    It ask for 2 thing number and how times you power it
    like rem is 2 and num is 3 then it be 2 * 2 * 2 = 8
*/

int power(int rem, int num)
{
    int pow = 1;
    int count = 1;
    while(count <= num){
        pow = pow * rem;
        count++;
    }
    return pow;
}

/*
    Function: narcissisticNumbers

    Im using Complex formula for this
    from userInput and digit place

    i create temp variable to store userInput

    then while temp != 0 then rem is temp%10 and using power function
    power each digit since each time do %10 you get rem of it
    after that temp/10 till temp 0 then compair to starting number than
    if equal then it narcissisticNumbers else not.
*/

int narcissisticNumbers(int userInput, int digit)
{
    int temp = userInput;
    int rem = 0;
    int sum = 0;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + power(rem,digit);
        temp = temp/10;
    }
    if(sum == userInput)
        return 1;
    else
        return 0;
}
