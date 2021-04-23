////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayPrime()  
// Description   :  Find Prime Number From Singly Linear Linked List
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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0, iNo = 0;

    while (Head != NULL)
    {
        iNo = 0;
        for(iCnt = 2; iCnt < Head -> Data; iCnt++)
        {
            if(Head -> Data % iCnt == 0)
            {
                iNo = 1;
                break;
            }
        }
        if(iNo == 0)
        {
            printf("%d\t", Head -> Data);
        }
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
    InsertFirst(&First, 22);   
    InsertFirst(&First, 41);   
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    Display(First);

    DisplayPrime(First);

    return 0;
}
