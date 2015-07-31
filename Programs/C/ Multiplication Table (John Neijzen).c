#include <stdio.h>

int main()
{ 
	int a , b; // Counter Int
	int c = 0; // Output Int
	for (a = 1; a <= 10; a++) // First For Loop For Colmem
	{ 
		for (b = 1; b <= 10; b++) // Second For Loop For Row
		{ 
			c = b * a; // MULTIPLY Process
			printf("%d\t", c); // Print Out C aka Output Int
		} 
		printf("\n"); // Just For Looks to makes beter and it makes row Lines
	}
	return 0;
} 
