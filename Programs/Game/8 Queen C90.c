/*
    @author:    John V. Neijzen
    @activity:  Queen (8 x 8)
    @section:   CSA 12 A
    @version:   0.4
    @Change-logs:
        0.1 - First Draft
        0.2 - added Checker Function
        0.3 - adding Struct function like push
        0.4 - Fixed some bugs
*/


#include <stdio.h>
#include <stdlib.h>

struct QueenStack{
  int posRow;
  int posCol;
  struct QueenStack* next;
};

struct QueenStack* head; // DONT MONIFILY

void display(int N,int* displayGird);
void solve(int firstQueenRow, int FirstQueenCol,int N,int* displayGird); //TODO
void push(int posRow, int posCol);
void pop();
void printStack();
int checker(int row, int col, int nQueens,int N,int* displayGird);


void main()
{
    int row=0, col=0,N;
    int i,j;
    head = NULL;

    printf("Enter Numbers Of Queens: ");
    scanf("%d", &N);
    int displayGird[N][N];

    for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
		    displayGird[i][j] = 0;
		}
	}

    printf("Input First Queen Row(1-%d): ", N);
    scanf("%d", &row);
    printf("Input First Queen Col(1-%d): ", N);
    scanf("%d", &col);
    row = row - 1;
    col = col - 1;
    push(row, col);
    displayGird[row][col] = 'Q';
    display(N,displayGird);
    printf("row = %d, col = %d",row,col);
    solve(row,col,N,displayGird);
}

void solve(int firstQueenRow, int FirstQueenCol,int N,int* displayGird)
{
    int checked = 0, nQueens = 1;
    int row = 0,col = 0;
    int row1 = 0, col1 = 0;
    int counter = 0;

    struct QueenStack *temp;

    while(nQueens < N)
    {

        for(col=col1;col<N;col++)
        {
            if(firstQueenRow == row)
            {
                row++;
            }
            checked = checker(row,col,nQueens,N,displayGird);
            if(checked == 1)
            {
                push(row,col);
                displayGird[col + row*N]='Q';
                printf("\n");
                display(N,displayGird);
                nQueens = nQueens + 1;
                row++;
                col1 = 0;
                break;
            }
        }

        if(checked == 0)
        {
            temp = head;
        	while(temp->next != NULL)
    		{
    			temp = temp->next;
    		}
    		row1 = temp->posRow;
    		col1 = temp->posCol;
    		if((row1 == firstQueenRow)||(col1==FirstQueenCol))
            {
                printf("No Solutions");
                return 0;
            }
    		displayGird[col1 + row1*N]=0;
    		printf("\n");
    		display(N,displayGird);
			pop();
			col1++;
			row=row1;
			nQueens--;
		}
    }
}

void push(int posRow, int posCol) // This will always add at end
{
    struct QueenStack *newNode,*temp;

    newNode = (struct QueenStack*)malloc(sizeof(struct QueenStack));
    newNode->posRow = posRow;
    newNode->posCol = posCol;
    newNode->next = NULL;

    if(head == NULL)
    {
        newNode->next = head;
        head=newNode;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void pop()
{
	struct QueenStack *temp,*temp2;
	temp = head;

	while(temp->next != NULL)
  	{
  		temp2 = temp;
    	temp=temp->next;
 	}
 	temp2->next = temp->next;
    free(temp);
}

void printStack() // This is just temp it be remove later on
{
    struct QueenStack *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("row = %d, col = %d \n", temp->posRow, temp->posCol);
        temp = temp->next;
    }
}

int checker(int row, int col, int nQueens,int N,int *displayGird)
{
    /*
        There are 3 ways queen can atk
        same row,same col, or same diagonal

        to check this we use 3 equations
        for row: R of queen 1 == R of queen 2
        for col: C of queen 1 == C of queen 2
        and diagonal: |R1-R2| == |C1-C2|
    */
    struct QueenStack *temp;
    temp = head;
    int diagonal,ctr,ctr1;

    // Check Row and CoL
    for(ctr=0;ctr<N;ctr++)
    {
        if((displayGird[ctr + row*N]=='Q')||(displayGird[col + ctr*N]=='Q'))
        {
            return 0;
        }
    }

    // Check diagonal
    for(ctr = 0;ctr < nQueens; ctr++)
    {
        int row2,col2;
        row2 = temp->posRow;
        col2 = temp->posCol;
        temp = temp->next;
        if(abs(row - row2)==abs(col - col2))
        {
            return 0;
        }
    }

    return 1;
}

void display(int N,int* displayGird)
{
    int i = 0,j = 0;

    for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
		    if(displayGird[j + i*N] != 81)
                printf("%d ", displayGird[j + i*N]);
            else
                printf("%c ", displayGird[j + i*N]);
		}
		printf("\n");
	}
}