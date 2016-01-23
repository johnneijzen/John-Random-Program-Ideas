/*
    @author:    John V. Neijzen
    @activity:  Activity 5.1 - Palindrome again
    @section:   CSA 12 A
    @version:   0.2
    @Change-logs: 0.2 - change my code to use pointers
    @ToDo:  make all letter upper case or lower case
            but requires #include <ctype.h> and toupper() function.
            it is The C Standard Library but i don`t if sir allows it.
            so i did not added. so it still case sensitive.
*/

/*
    Create a program that determine whether a string entered by the user is a palindrome or not.
    A palindrome is a string that is the same way forward or backward. THIS TIME USING POINTERS
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char *userInput;
    int length = 0;
    int ctr;
    int error = 0;

    userInput = malloc(sizeof(char *));
    printf("Enter a word or string:");
    scanf("%[^\n]s", userInput);

    while (*(userInput+length)!='\0')
        length++;

    for(ctr=0;ctr < length ;ctr++)
    {
        if(*(userInput+ctr) != *(userInput+length-1-ctr))
        {
            error = 1;
            break;
        }
    }

    if (error == 1)
        printf("%s is not a palindrome", userInput);
    else
        printf("%s is a palindrome", userInput);

    return 0;
}
