#include <stdio.h>

int main()
{
	// Var
	int num1 = 0; // Input Number 1
	int num2 = 0; // Input Number 2
	int Counter = 0; // Counter
	int Product = 0; // Product
	//First Number Input
	printf("Note: Mutiply two negative numbers may take long time. But it Works i dont know why?.")
	printf("First Number MULTIPLY: ");
	scanf("%d", &num1);
	//Second Number Input
	printf("Second Number MULTIPLY: ");
	scanf("%d", &num2);
	//while loop
	while(num2 != Counter)
	{
		Product = Product + num1; // add num1 to total
		Counter = Counter + 1; // add 1 to counter to see how many it add it self
	}
	
	printf("%d", Product); // Print out product
}
