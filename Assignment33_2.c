////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SearchLastOcc()  
// Description   :  Search Last Occurrence Of Particular Element From Singly Linear Linked List
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

int SearchLastOcc(PNODE Head, int No)
{
    int iCnt = 0, Temp = 0; // counter, temperery container

    while(Head != NULL) // travel till Next is NULL
    {
        iCnt++; // every time counter go to next time till No not found 100, 200 .... 600
        if(Head -> Data == No) // in 600 Node data is 30, so travel till 6 node
        {
            Temp = iCnt; // value of counter get store into tempery container
        }
        Head = Head -> Next; // if 30 not found node -> Next
    }
    return Temp; // return the position of Temp to iRet in main
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
    int iNo = 0, iRet = 0;

    PNODE First = NULL;
    
    InsertFirst(&First, 70);   
    InsertFirst(&First, 30);   
    InsertFirst(&First, 50);   
    InsertFirst(&First, 40);   
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    Display(First);

    printf("\nEnter element to search: ");
    scanf("%d", &iNo);

    iRet = SearchLastOcc(First,iNo);

    printf("Found At : %d", iRet);

    return 0;
}