////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumDigit()  
// Description   :  Sum Of Digits Of Element From Singly Linear Linked List
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

void SumDigit(PNODE Head)
{
    int iDigit = 0, Sum = 0;
    while (Head != NULL)
    {
        Sum = 0;
        while (Head -> Data > 0)
        {
            iDigit = Head -> Data % 10;
            {
                Sum = Sum + iDigit;
            }
            Head -> Data = Head -> Data / 10;
        }
        printf("%d\t", Sum);
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

    InsertFirst(&First, 640);   
    InsertFirst(&First, 240);   
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    Display(First);

    SumDigit(First);

    return 0;
}