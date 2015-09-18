#include <stdio.h>

int main()
{
    int i, j;

    int matrix[5][5] = {
        1,  2,  3,  4,  5,
        6,  7,  8,  9,  10,
        11, 12, 13, 14, 15,
        16, 17, 18, 19, 20,
        21, 22, 23, 24, 25
	};

	printf("Original matrix:\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of the Matrix:\n");
	for(j = 0; j < 5; j++)
	{
		for(i = 0; i < 5; i++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
