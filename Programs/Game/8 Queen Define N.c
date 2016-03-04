/*
    @author:    John V. Neijzen
    @activity:  Queen (8 x 8)
    @section:   CSA 12 A
    @version:   0.5
    @Change-logs:
        0.1 - First Draft
        0.2 - added Checker Function
        0.3 - adding Struct function like push
        0.4 - Fixed some bugs
        0.5 - Change row and col to use stack not display
*/

/*
*/

#include <stdio.h>
#include <stdlib.h>
#define N 8 // Change This Depending on board size you want.

int displayGird[N][N] = {0};

struct QueenStack{
  int posRow;
  int posCol;
  struct QueenStack* next;
};

struct QueenStack* head; // DONT MONIFILY

void display();
void solve(int firstQueenRow, int FirstQueenCol); //TODO
void push(int posRow, int posCol);
void pop();
void printStack();
int checker(int row, int col, int nQueens);


void main()
{
    int row = 0, col=0;
    head = NULL;
    printf("Input First Queen Row(1-%d): ", N);
    scanf("%d", &row);
    printf("Input First Queen Col(1-%d): ", N);
    scanf("%d", &col);
    row = row - 1;
    col = col - 1;
    push(row, col);
    displayGird[row][col] = 'Q';
    display();
    solve(row,col);
}

void solve(int firstQueenRow, int FirstQueenCol)
{
    int checked = 0, nQueens = 1;
    int row = 0,col = 0;
    int row1 = 0, col1 = 0;

    struct QueenStack *temp;

    while(nQueens < N)
    {
        for(col=col1;col<N;col++)
        {
            if(firstQueenRow == row) // First Queen is one same row move row down by 1
            {
                row++;
            }
            checked = checker(row,col,nQueens);
            if(checked == 1)
            {
                push(row,col);
                displayGird[row][col]='Q';
                printf("\n");
                display();
                nQueens = nQueens + 1;
                row++;
                col1 = 0; // After checked 1 and queen has been place row goes down by 1 and col1 resets.
                break;
            }
        }
        /*
            This Below is backtracking part

            it used stacks to get pos of last queen then remove from display and delete from stack and
            set row and col+1 from last queen from stack back into loop and for loop goes back to start.
            but if pop so many times that reach to first queen then it will no solution.
        */

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
    		displayGird[row1][col1]=0;
    		printf("\n");
    		display();
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

int checker(int row, int col, int nQueens)
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
    int ctr;

    for(ctr = 0;ctr < nQueens; ctr++)
    {
        int row2,col2;
        row2 = temp->posRow;
        col2 = temp->posCol;
        temp = temp->next;
        if(abs(row - row2)==abs(col - col2)) // Check diagonal
        {
            return 0;
        }
        else if((row == row2)||(col == col2)) // Check Rows and Cols
        {
            return 0;
        }
    }

    return 1;
}

void display()
{
    int i = 0,j = 0;

    for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
		    if(displayGird[i][j] != 81)
                printf("%d ", displayGird[i][j]);
            else
                printf("%c ", displayGird[i][j]);
		}
		printf("\n");
	}
}
