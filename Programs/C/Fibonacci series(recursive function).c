/*
    @author:    John V. Neijzen
    @activity:  3.1 - The famous Fibonacci Series problem
    @section:   CSA 12 A
    @version:   0.2
    Changelogs: int function to void function.
*/

/*
    You are to write a C program that accepts two (2) non-negative integers:
	let the first integer, n, be the nth element of the series (the start element of the output),
	and the second input be the number of elements to be printed from the nth element.
*/

#include <stdio.h>

/*
	This Programs bit like this i have 3 variables are first next second
	first = 0, next = 0, second = 1

	formula I used this following:
	first = first + second;
	second = next;
	next = first;

	So what happen is like this
	1st run = first = 0, second = 1, next = 0
	2nd run = first = 1, second = 0, next = 1
	3nd run = first = 1, second = 1, next = 1
	4nd run = first = 2, second = 1, next = 2
	5nd run = first = 3, second = 2, next = 3
	6nd run = first = 5, second = 3 next = 5
	7nd run = first = 8, second 5, next = 8

	And then print variable next and you get: 0,1,1,2,3,5,8
*/

void Fibonacci(int count,int userInput,int userInput2,int first,int next,int second);

void main()
{
	int count = 1;
	int first = 0;
	int next = 0;
	int second = 1;

	// Input
	int userInput = 0;
	int userInput2 = 0;
	printf("This Program does Fibonacci Series Problem");
	printf("\nEnter number to be starting element: ");
	scanf("%d", &userInput);
	printf("Enter number of how many elemnt you want to print out: ");
	scanf("%d", &userInput2);

	// Process/Output
	Fibonacci(count,userInput,userInput2,first,next,second);
}

void Fibonacci(int count,int userInput,int userInput2, int first,int next,int second)
{
	if(count != userInput + userInput2)
	{
		if(count >= userInput)
		{
			printf("%d ", next);
		}
		first = first + second;
		second = next;
		next = first;
		count++;
		Fibonacci(count,userInput,userInput2,first,next,second);
	}
}
