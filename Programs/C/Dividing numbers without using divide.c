#include <stdio.h>

int main()
{
	// Var
	int num1 = 0; // Input Number 1
	int num2 = 0; // Input Number 2
	int counter = 0;
	int divide = 0; // Product
	int negative1 = 0;
	int negative2 = 0;
	int rem = 0;
	//First Number Input
	printf("Note: Division two negative numbers may take long time\n");
	printf("First Number Divide: ");
	scanf("%d", &num1);
	//Second Number Input
	printf("Second Number Divide: ");
	scanf("%d", &num2);
	if (num1 < 0)
	{
		num1 = -1 * num1;
		negative1 = 1;
	}
	if (num2 < 0)
	{
		num2 = -1 * num2;
		negative2 = 1;
	}
	if(num2 == 0)
	{
		printf("Cant divide by 0");
		return 0;
	}
	divide = num1;
	for(counter = 0;divide>0;counter++)
	{
		divide = divide - num2;
	}
	if(divide < 0)
	{
		divide = divide + num2;
		counter = counter - 1;
	}
	rem = divide;
	if((negative1 == 0)&&(negative2 == 0))
		printf("%d with rem of %d", counter, rem); // Print out product
	else if((negative1 == 1)&&(negative2 == 0))
		printf("%d with rem of %d", counter*-1, rem); // Print out product
	else if((negative1 == 0)&&(negative2 == 1))
		printf("%d with rem of %d", counter*-1, rem); // Print out product
	else
		printf("%d with rem of %d", counter, rem); // Print out product
}
