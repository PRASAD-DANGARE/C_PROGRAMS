////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SearchFirstOcc()  
// Description   :  Search First Occurrence Of Particular Element From Singly Linear Linked List
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

int SearchFirstOcc(PNODE Head, int No)
{
    int iCnt = 0; // counter gatla
    while(Head != NULL)
    {
        iCnt++; // counter++ 100, 200, 300
        if(Head -> Data == No) // 30 ha data 3 node madhe sapadla 
        {
            break;
        }
        Head = Head -> Next; // jar 30 ha nehi sapadla node ++
    }
    return iCnt; // return kar main la iRet madhe
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

    iRet = SearchFirstOcc(First,iNo);

    printf("Found At : %d", iRet);

    return 0;
}
