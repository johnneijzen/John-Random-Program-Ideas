#include <stdio.h>
int genetic_root(int x); // Function Prototype

int genetic_root(int x) {  // Function
	while(x > 9) { // If x > 9 Run code
		x = x % 9; // x is equal to x % 9
		if(x == 0) { // if x is Equal to 0 it is 9 for example 9
			x = 9; // Set x to 9
		}
	}
	return x; // Return X
}

int main() {
    //Vars
	int userInput = 0;
	int answer = 0;

	printf("Enter Number: "); // Ask User Number
	scanf("%d", &userInput); // Get User Number
	if(userInput >= 0) { // if not lower than 0 run program
		answer = genetic_root(userInput); // run genetic_root Function and get answer and store it in answer
		printf("%d", answer); // Print out Answer
	} else {
		printf("Error"); // Output error if is less than 0
		return 0; // EXIT
	}
	getch(); // Wait for user to end
	return 0;
}
