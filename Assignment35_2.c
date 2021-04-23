////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayPallindrome()  
// Description   :  Find Pallindrone Number From Singly Linear Linked List 
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

void DisplayPallindrome(PNODE Head)
{

    int iDigit = 0, iRev = 0, iTemp = 0; 

    while(Head != NULL)
    {
        if(Head == NULL)
        {
            return;
        }

        iRev = 0;
        iTemp = Head -> Data;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            {
                iRev = iRev * 10 + iDigit;
            }
            iTemp = iTemp / 10;
        }
        
        if(Head -> Data == iRev)
        {
            printf("%d\t", iRev);
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
    InsertFirst(&First, 6);   
    InsertFirst(&First, 414);   
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    Display(First);

    DisplayPallindrome(First);

    return 0;
}