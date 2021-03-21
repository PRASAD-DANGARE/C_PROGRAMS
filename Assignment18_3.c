////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Check()  
// Description   :  Accept Number From User & Check It Contains 11 As Element Or Not 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i]) == 11)
        {
            return TRUE;
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    BOOL bRet = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);
    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
    printf("11 is absent");
    }

    free(p);

    return 0;
}