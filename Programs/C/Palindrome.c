/*
    @author:    John V. Neijzen
    @activity:  Activity 5 - Palindrome
    @section:   CSA 12 A
    @version:   0.1
    @Change-logs: 0.1 - Fix Bugs
    @ToDo:  make all letter upper case or lower case
            but requires #include <ctype.h> and toupper() function.
            it is The C Standard Library but i don`t if sir allows it.
            so i did not added. so it still case sensitive.
*/

/*
    Create a program that determine whether a string entered by the user is a palindrome or not.
    A palindrome is a string that is the same way forward or backward.
*/
#include <stdio.h>

int main ()
{
    char word[500];
    int length = 0;
    int i;
    int error = 0;

    printf("Enter a word:");
    scanf("%[^\n]s", word);

    while(word[length]!='\0')
        length++;

    for(i=0;i < length ;i++)
    {
        if(word[i] != word[length-1-i])
        {
            error = 1;
            break;
        }
    }

    if (error == 1)
        printf("%s is not a palindrome", word);
    else
        printf("%s is a palindrome", word);

    return 0;
}
