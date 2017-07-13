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
