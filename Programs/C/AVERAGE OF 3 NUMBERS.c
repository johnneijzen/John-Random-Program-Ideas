#include <stdio.h>
#include <windows.h>

int main()
{
	int Average = 0;
	int Quiz1 = 0;
	int Quiz2 = 0;
	int Quiz3 = 0;
	// Ask User For For Scores
	printf("Enter Quiz 1: ");
	scanf("%d", &Quiz1);
	printf("Enter Quiz 2: ");
	scanf("%d", &Quiz2);
	printf("Enter Quiz 3: ");
	scanf("%d", &Quiz3);
	// Processing the Scores
	Average = Quiz1 + Quiz2 + Quiz3;
	Average = Average / 3;
	// Pass or Fail
	if (Average > 50)
		printf("Passed");
	else
		printf("Failed");
		
	return 0;
}
