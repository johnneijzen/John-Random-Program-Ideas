#include <stdio.h>
#include <stdlib.h>

int lexer(char string)
{
    switch(string)
	{
	    case 'A':  return 1;
		case 'B':  return 1;
		case 'C':  return 1;
        case '=':  return 2;
		case '+':  return 3;
		case '-':  return 4;
		case '*':  return 5;
		case '/':  return 6;
        case '(':  return 7;
		case ')':  return 8;
		case '1':  return 9;
		case '2':  return 9;
		case '3':  return 9;
		case '4':  return 9;
		case '5':  return 9;
		case '6':  return 9;
		case '7':  return 9;
		case '8':  return 9;
		case '9':  return 9;
		case '0':  return 9;
		case ' ':  return 10;
		default :   return 11;
	}
}

// <expr>  <- <term> + <term>
// <expr>  <- <term> - <term>
// <expr>  <- <term>
void expr(char string[], int count, int rule)
{

}

// <term>  <- <Factor> * <factor>
// <term>  <- <factor> / <factor>
// <term>  <- <Factor>
void term(char string[], int count, int rule)
{
    int ctr = 0;
    int ctr1 = 0;
    int ctr2 = 0;
    char letter;
    char letter1;
    char letter2;
    int token = 0;
    int token1 = 0;
    int token2 = 0
    int checked = 0;

    do
    {
        letter = string[ctr];
        ctr++;
    } while (letter == ' ');
    token = lexer(letter);

    ctr1 = ctr

    do
    {
        letter1 = string[ctr1];
        ctr1++;
    } while (letter == ' ');

    token1 = lexer(letter1);

    ctr2 = ctr1

    do
    {
        letter1 = string[ctr2];
        ctr2++;
    } while (letter == ' ');

    token2 = lexer(letter2);

    if(token == 1) // ID
    {
        if(token1 == 5)
        {
            if(token2 == 1)
            {
                expr(string,ctr2, 1);
            }
            else if (token2 == 9)
            {
                expr(string,ctr2, 1);
            }
            else
            {

            }
        }
        else if(token1 == 6)
        {
            if(token2 == 1)
            {
                expr(string,ctr2, 2);
            }
            else if (token2 == 9)
            {
                expr(string,ctr2, 2);
            }
            else
            {

            }
        }
    }
    else if (token == 9) // Number
    {
        if(token1 == 5)
        {
            if(token2 == 1)
            {
                expr(string,ctr2, 1);
            }
            else if (token2 == 9)
            {
                expr(string,ctr2, 1);
            }
            else
            {

            }
        }
        else if(token1 == 6)
        {
            if(token2 == 1)
            {
                expr(string,ctr2, 2);
            }
            else if (token2 == 9)
            {
                expr(string,ctr2, 2);
            }
            else
            {

            }
        }
    }
    else if ( )


}

// <Factor>  <- ID
// <Factor>  <- Number
// <Factor>  <- (expr)
int factor(char string[], int count)
{
    int ctr = 0;
    char letter;
    int token = 0;
    int checked = 0;

    do
    {
        letter = string[ctr];
        ctr++;
    } while (letter == ' ');

    token = lexer(letter);

    if(token == 1)
        checked = term(string,ctr, 1);
    else if(token == 9)
        checked = term(string, ctr, 2);
    else if(token == 7)
        checked = term(string, ctr, 3);
    else
        return 0;

    return checked;
}

int parser(char string[])
{
    /*
        Assign <- <id> = <expr>
        Id  <- A|B|C
        <expr>  <- <term> + <term>
        <expr>  <- <term> - <term>
        <expr>  <- <term>
        <term>  <- <Factor> * <factor>
        <term>  <- <factor> / <factor>
        <term>  <- <Factor>
        <Factor>  <- (expr)
        <Factor>  <- ID
        <Factor>  <- Number
    */

    int ctr = 0;
    char letter;
    int token = 0;
    int token1 = 0;
    int checked = 0;

    do
    {
        letter = string[ctr];
        ctr++;
    } while (letter == ' ');

    token = lexer(letter);

    do
    {
        letter = string[ctr];
        ctr++;
    } while (letter == ' ');

    token1 = lexer(letter);

    if(token == 1)
    {
        if(token1 == 2)
        {
            checked = factor(string, ctr);
        }
        else
        {
            printf("error at char %c",letter);
        }
    }
    return checked;
}

int main()
{
    int ctr;

    FILE *fp;
    char filename[255];
    printf("Enter Filename Note add .txt to it: ");
    scanf("%s", &filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("file does not exists %s", filename);
        return 0;
    }

    const size_t line_size = 300;
    char* line = malloc(line_size);
    while (fgets(line, line_size, fp) != NULL)
    {
        if(ctr == 1)
        {
            parser(line);
        }
        ctr = 1;
    }
    free(line);    // dont forget to free heap memory
}
