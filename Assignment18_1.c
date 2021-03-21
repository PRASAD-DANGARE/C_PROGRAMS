////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SumEvenElements()  
// Description   :  Accept Number From User & Return Frequency Of Even Numbers 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int SumEvenElements(int Arr[], int iLength)
{
    int iCnt = 0, i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{

    int * arr = NULL;
    int i = 0, iSize = 0, iRet = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d", &iSize);

    arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter The Elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    iRet = SumEvenElements(arr, iSize);
    printf("Count of all Even Numbers are : %d\n", iRet);

    return 0;
}