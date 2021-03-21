////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Range()  
// Description   :  Accept 3 Input From User & Check Whether That Number Is In Range Or Not
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;
    printf("Elements Between The Range Are : \n");
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\n", Arr[i]);
        }
    }
}

int main()
{

    int *p = NULL;
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter the elements : \n");
    
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}