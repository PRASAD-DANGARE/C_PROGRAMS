////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayLarge()  
// Description   :  Find Largest Digits From Singly Linear Linked List 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 April 2021
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node * Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no )
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->Next = NULL;
    newn->Data = no;
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

void DisplayLarge(PNODE Head)
{
    int Max = 0, iDigit = 0;
    
    while (Head != NULL)
    {
        Max = 0;
        while (Head -> Data > 0)
        {
            iDigit = Head -> Data % 10;
            {
                if(iDigit > Max)
                {
                    Max = iDigit;
                }
            }
            Head -> Data = Head -> Data / 10;
        }
        printf("%d\t", Max);
        Head = Head -> Next;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|->\t", Head -> Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

int main()
{

    PNODE First = NULL;

    InsertFirst(&First, 419);   
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
    Display(First);

    DisplayLarge(First);

    return 0;
}