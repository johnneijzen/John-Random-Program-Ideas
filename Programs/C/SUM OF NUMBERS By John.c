#include <stdio.h>

int main()
{
	// User Input xD
	int UserInput = 0;
	int Total = 0;
	// Loop Do White
	do
	{
		printf("Enter Number: "); // print enter number
		scanf("%d", &UserInput); // get user input
		Total = Total + UserInput; // add that to total
		printf("Total Sum:%d\n", Total); // Print total
	}
	while(UserInput != 0); // if input is 0 end loop
	printf("Total Sum:%d\n", Total); // Print total
}
