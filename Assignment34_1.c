////////////////////////////////////////////////////////////////////////////
//
// Function Name :  DisplayPerfect()  
// Description   :  Find Perfect Number From Singly Linear Linked List
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

void DisplayPerfect(PNODE Head)
{

    int iNo = 0, iCnt = 0; // 2 Variables gatle for % and + sathi

    while(Head != NULL)
    {
        iNo = 0; // after every travelser th value of iNo is initialize to 0

//      initilize to 1,    icnt < 11,28,17,     100,200,300...600  
        for(iCnt = 1; iCnt < Head -> Data; iCnt++) 
        {
            if(Head -> Data % iCnt == 0) // 1 * 2 * 3 = 6 , 1 + 2 + 4 + 7 + 14 = 28
            {
                iNo = iNo + iCnt; // 1 + 2 + 3 = 6
            }
        }
        if(Head -> Data == iNo) // in iNo 6, 28 is stored
        {
            printf("%d\t", iNo); // display the value
        }
        Head = Head -> Next; // if value is not found ++
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

    DisplayPerfect(First);

    return 0;
}