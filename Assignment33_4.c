////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Maximum()  
// Description   :  Largest Element From Singly Linear Linked List
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

int Maximum( PNODE Head)
{
    int Max = Head -> Data; // int Max = 0;
    while(Head != NULL)
    {
        if(Head -> Data > Max)
        Max = Head -> Data;
        Head = Head -> Next;
    }
    return Max;
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
    int iRet = 0;

    PNODE First = NULL;
      
    InsertFirst(&First, 240);   
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    Display(First);

    iRet = Maximum(First);

    printf("Maximum Value Is : %d ", iRet);

    return 0;
}