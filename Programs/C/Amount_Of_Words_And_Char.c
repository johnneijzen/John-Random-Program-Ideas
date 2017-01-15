/*
    The MIT License (MIT)

    Copyright (c) 2015-2017 John Neijzen

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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Maximum Size */
#define MaxSize 256

/**
    @author:    John V. Neijzen
    @section:   CSB 22.1 B
    @version:   0.1
    @purpose: Program get input then output amount of words and characters
*/

/**
    Function: countWords
    This Function count amount of words using ' ' and '\0' and '\n' to find out spaces

    @param: char inputString[]
    @return: int words
 */
int countWords(char inputString[]){
    int count = 0;
    int lenght = strlen(inputString);
    int words = 0;

    for(count = 0;count<lenght;count++){
        // Basically it asking if is space or terminates or new line then
        if((inputString[count]==' ')||(inputString[count]=='\0')||(inputString[count]=='\n')){
            words++;
        }
    }
    return words;
}

/**
    Function: countCharacters
    This Function count amount of Characters by using for loop for lenght of inputString array
    checking that is not space or new line or \0

    @param: char inputString[]
    @return: int characters
 */
int countCharacters(char inputString[]){
    int count = 0;
    int lenght = strlen(inputString);
    int characters = 0;

    for(count = 0;count<lenght;count++){
        // Basically it asking if is space or terminates or new line then
        if(!((inputString[count]==' ')||(inputString[count]=='\0')||(inputString[count]=='\n'))){
            characters++;
        }
    }
    return characters;
}

/**
    Function: countCharactersWithSpace
    This Function count amount of Characters include space by using
    strlen - 1

    @param: char inputString[]
    @return: int characters
 */
int countCharactersWithSpace(char inputString[]){
    int characters = (strlen(inputString)-1); // -1 is for terminator or new line.
    return characters;
}

void main() {
    /* Variables */
    char *userInput = malloc (MaxSize);
    int characters = 0;
    int charactersWithSpace = 0;
    int words = 0;

    /* Display Start Up*/
    printf("Hello Welcome To My Program");
    printf("\nThis Program will accept input and will display amount of character and words");
    printf("\nInput: ");
    
    /*
        Get User Input

        I`m using fgets for buffer protection since scanf can crash
        some source why you should not use gets or scanf

        Walt P(2005, Sep 21). Things to Avoid in C/C++ -- scanf, Part 5. Retrieved from URL
        http://www.gidnetwork.com/b-59.html

        giannis(2008, February 7). scanf (and why you should avoid using it). Retrieved from URL
        http://www.giannistsakiris.com/2008/02/07/scanf-and-why-you-should-avoid-using-it/

    */
    fgets(userInput,256, stdin);

    /* Runs Functions */
    words = countWords(userInput);
    characters = countCharacters(userInput);
    charactersWithSpace = countCharactersWithSpace(userInput);

    /* Displays Outputs */
    printf("\nAmount of words from input is: %d", words);
    printf("\nAmount of Characters without spacing from input is: %d", characters);
    printf("\nAmount of Characters with spacing from input is: %d", charactersWithSpace);

    /* Free Pointer */
    free(userInput); // is not needed but just for good habit
}
