///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Display Addition Using Array
// Author        :  Prasad Dangare
// Date          :  17 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int SumElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;

    for(i = 0; i < iLength; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
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

    iRet = SumElements(arr, iSize);
    printf("Summation of all elements are : %d\n", iRet);

    return 0;
}