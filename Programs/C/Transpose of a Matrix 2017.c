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
    @version: 0.01
    @changelogs: 0.01 - first code
*/

#include <stdio.h>

int main()
{
    int i, j;

    int matrix[5][5] = { // Original matrix List
        1,  2,  3,  4,  5,
        6,  7,  8,  9,  10,
        11, 12, 13, 14, 15,
        16, 17, 18, 19, 20,
        21, 22, 23, 24, 25
	};

	printf("Original matrix:\n");
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
