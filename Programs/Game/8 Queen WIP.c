/*
    @author:    John V. Neijzen
    @activity:  Queen (8 x 8)
    @section:   CSA 12 A
    @version:   0.3
    @Change-logs:
        0.1 - First Draft
        0.2 - added Checker Function
        0.3 - adding Struct function like push
*/

/*
*/

#include <stdio.h>
#include <stdlib.h>
#define N 8 // Change This Depending on board size you want.
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int displayGird[N][N] = {0};

struct QueenStack{
  int posRow;
  int posCol;
  struct QueenStack* next;
};

struct QueenStack* head; // DONT MONIFILY

void display();
void solve(int firstQueenRow, int FirstQueenCol); //TODO
void push(int posRow, int posCol); //TODO
void printStack();
int checker(int row, int col, int nQueens);


void main()
{
    int row, col;
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
    int ctr,ctr1;

    while(nQueen < N)
    {
        for(ctr = 0;ctr < N;ctr++)
        {
            for(ctr1 = 0;ctr1 < N;ctr1++)
            {
                
            }
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

void printStack() // This is just temp it be remove later on
{
    struct QueenStack *temp;
    temp = head; // Because NEVER CHANGE YOU HEAD only when doing first step.
    while (temp != NULL)
    {
        printf("row = %d, col = %d \n", temp->posRow, temp->posCol);
        temp = temp->next;
    }
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
    int diagonal,ctr,ctr1;

    // Check Row and CoL
    for(ctr=0;ctr<N;ctr++)
    {
        if((displayGird[row][ctr]=='Q')||(displayGird[ctr][col]=='Q'))
        {
            printf("Row OR Col Error\n");
            return 0;
        }
    }

    // Check diagonal
    for(ctr = 0; ctr < nQueens; ctr++)
    {
        int row2,col2;
        row2 = temp->posRow;
        col2 = temp->posCol;
        temp = temp->next;

        if(abs(row - row2)==abs(col - col2))
        {
            printf("Diagonal Error\n");
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
