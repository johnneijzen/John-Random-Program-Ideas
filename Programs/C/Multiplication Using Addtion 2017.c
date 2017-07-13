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
    @version: 0.02 - 7/14/2017
    @changelogs: 0.01 - first code
                0.02 - clean and some improvements
*/

#include <stdio.h>

int main()
{
	// Variables 
	int num1 = 0; // Input Number 1
	int num2 = 0; // Input Number 2
	int Counter = 0; // Counter
	int Product = 0; // Product

	// First Number Input
	printf("Note: Mutiply two negative numbers may take long time but it works i dont know why?.\n");
	printf("First Number MULTIPLY: ");
	scanf("%d", &num1);

	// Second Number Input
	printf("Second Number MULTIPLY: ");
	scanf("%d", &num2);

	// Process
	while(num2 != Counter)
	{
		Product = Product + num1; // add num1 to total
		Counter++; // increment Counter still will continue till num2 == Counter
	}
	
	printf("%d", Product); // Print out product
}
