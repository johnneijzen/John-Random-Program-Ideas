#include <stdio.h>

int automorphicNumbers(int a);

void main()
{
    int n = 0; // is used as Counter to see if how number has been found
    int i = 1; // is used as Number Counter to test with
    int isItAutomorphicNumber = 0; // Used to get condition with function Automorphic Numbers

    printf("The first eight automorphic numbers are:\n");
    while(n != 8) // Loop till it finds 8 numbers
    {
        isItAutomorphicNumber = automorphicNumbers(i); // Call Function automorphicNumbers and send value i and wait for return value
        if(isItAutomorphicNumber == 1) // if function automorphicNumbers return 1 than it Automorphic Number
        {
            printf("%d\n", i); // Print out number
            n++; // add one to Counter
        }
        i++; // add one to Numbers Counter
    }
    getch(); // Pause
}

/* how do i explain this:
if a*a%10 == a ex. 5 * 5 is 25 % 10 is 5 then == 5 yes return 1
if a*a%100 == a ex. 76 * 76 is 5776 % 100 is 76 == 76 yes return 1.
*/
int automorphicNumbers(int a)
{
    if ((a*a%10==a)||(a*a%100==a)||(a*a%1000==a)||(a*a%10000==a))
        return 1;
    else
        return 0;
}
