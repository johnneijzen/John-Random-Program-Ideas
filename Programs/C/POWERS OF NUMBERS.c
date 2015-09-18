#include <stdio.h>
// Function Global
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
