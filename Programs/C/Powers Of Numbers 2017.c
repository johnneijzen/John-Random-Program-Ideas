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
    @changelogs: 0.01 - first draft
*/

#include <stdio.h>

// Function
int square(int);
int cube(int);
int toTheFourthPower(int);
int toTheFifthPower(int);

int square(int x)
{
	return x * x; // Example if x is 5 the square would be x * x that is 25
}

int cube(int x)
{
	return x * (x * x); // Example if x is 2 the square would be x * x * x that is 8
}

int toTheFourthPower(int x)
{
	return x * (x * (x * x)); // Example if x is 2 the square would be x * x * x * x that is 16
}

int toTheFifthPower(int x)
{
	return x * (x * (x * (x * x))); // Example if x is 2 the square would be x * x * x * x that is 32
}

int main()
{
	// Var
	int userInput = 0; // User Number

	printf("Enter Number: "); // Ask User Number
	scanf("%d", &userInput); // Get User Number
	printf("\n%d^2 = %d \n", userInput, square(userInput)); // Square Number
	printf("%d^3 = %d \n", userInput, cube(userInput)); // Cube Number
	printf("%d^4 = %d \n", userInput, toTheFourthPower(userInput)); // x^4 Number
	printf("%d^5 = %d \n", userInput, toTheFifthPower(userInput)); // x^5 Number
}
