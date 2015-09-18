#include <stdio.h>

int main()
{
    int i, j; // Vars i use for for loop

    int matrix[5][5] = { // Original matrix List
        1,  2,  3,  4,  5,
        6,  7,  8,  9,  10,
        11, 12, 13, 14, 15,
        16, 17, 18, 19, 20,
        21, 22, 23, 24, 25
	};

	printf("Original matrix:\n");// Original matrix
	for(i = 0; i < 5; i++) // Loop Continuous till 5 line is done aka i is 5
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", matrix[i][j]); // Print line of number till j is 5 then it goes out of this loop then add 1 to i for loop.
		}
		printf("\n"); // make next line space
	}
	printf("\n");
    // basically same as Original matrix only thing is change is j to i and i to j
	printf("Transpose of the Matrix:\n"); // Transpose of the Matrix
	for(j = 0; j < 5; j++) // Loop Continuous till 5 line is done aka j is 5
	{
		for(i = 0; i < 5; i++)
		{
			printf("%d\t", matrix[i][j]); // Print line of number till i is 5 then it goes out of this loop then add 1 to j for loop.
		}
		printf("\n"); // make next line space
	}
	getch();
}
