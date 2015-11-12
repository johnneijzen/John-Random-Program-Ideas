/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
  int randomNumber, userInput;

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  randomNumber = rand() % 10 + 1;

  do {
    printf ("Guess the number (1 to 10): ");
    scanf ("%d", &userInput);
    if (randomNumber < userInput) puts ("The secret number is lower");
    else if (randomNumber > userInput) puts ("The secret number is higher");
  } while (randomNumber != userInput);

  printf("Congratulations!");
}
