#include <stdio.h>

int narcissisticNumbers(int x);

void main()
{
    int userInput = 0; // Var we used to store use user input
    int isItNarcissisticNumber = 0; // Used store condition with function narcissisticNumbers

    do { // Loop do-while
        printf("Enter number: "); // ask user number
        scanf("%d", &userInput); // get user input
        if(userInput != 0) // check if userInput is not 0
        {
            isItNarcissisticNumber = narcissisticNumbers(userInput); // Call function narcissisticNumbers and give userInput and wait for 1 or 0
            if(isItNarcissisticNumber == 1) // if narcissisticNumbers return 1 then it is narcissistic Number
                printf("%d is Narcissistic\n", userInput); // Print out that is narcissistic Number
            else
                printf("%d is Not Narcissistic\n", userInput); // else this print out
        }
    } while(userInput != 0); // Loop ends till user type 0;
}

int narcissisticNumbers(int x)
{
    int i; // used as power of 3
    int j=x;  // j is used to store x for later use
    int sum = 0; // get total of power thing

    if(j > 100) // if greater than 100 than used this
    {
        while(j>0) // while greater than 0 loop
        {
            i=j%10; // get first dig then after loop is second digit then it 3 digit
            sum=sum+(i*i*i); // add i by 3 times
            j=j/10; // j divide by 10
        }
         if(x==sum) // if x == sum then it is Narcissistic Number
            return 1; // return 1; for true
    }
    else if(j < 10) // else if j < 10 since 0,1,2,3,4,5,6,7,8,9 are still narcissistie Numbers but they are single digit
    {
        while(j>0)// Loop while j > 0
        {
            sum=sum+(j); // Sum just do this 1 so that is 1^1 that is still 1 :p
            j=j-j; // J = j - j so noting is left
        }
        if(x==sum) // if x == sum then it is Narcissistic Number
            return 1; // return 1; for true
    }
    else // else false
    {
        return 0; // return 0; for False
    }
}
