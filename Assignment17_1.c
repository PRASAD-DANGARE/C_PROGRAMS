////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Difference()  
// Description   :  Accept N From User & Return Difference Of Summation Of Even And Odd Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSum1 = 0, iSum2 = 0, i = 0, iRet = 0;
    {
        for(i = 0; i < iLength; i++)
        {
            if(Arr[i] % 2 == 0)
            {
                iSum1 = iSum1 + Arr[i];
            }
            else
            {
                iSum2 = iSum2 + Arr[i];
            }
        }
        iRet = iSum1 - iSum2;
    }
    return iRet;
}

int main()
{
    int *arr = NULL;
    int iSize = 0, iRet = 0, i = 0;

    printf("Enter The Elements : ");
    scanf("%d", &iSize);

    arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter Elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    iRet = Difference(arr, iSize);
    printf("Subtraction Of Odd & Even Elements are : %d", iRet);

    free(arr);

    return 0;
}