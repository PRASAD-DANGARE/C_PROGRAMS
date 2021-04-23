////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Reverse()  
// Description   :  Reverse Each Element Of Singly Linked List 
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

void Reverse(PNODE Head)
{
    int newn = 0, iDigit = 0;

    while(Head != NULL)
    {
        if(Head == NULL)
        {
            return;
        }

        newn = 0;

        while(Head -> Data > 0)
        {
            iDigit = Head -> Data % 10;
            {
                newn = newn * 10 + iDigit;
            }
            Head -> Data = Head -> Data / 10;
        }
        printf("%d\t", newn);
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

    InsertFirst(&First, 89);   
    InsertFirst(&First, 6);   
    InsertFirst(&First, 41);   
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    Display(First);

    Reverse(First);

    return 0;
}