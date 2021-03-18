///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Display Addition Of Even Numbers Using Array
// Author        :  Prasad Dangare
// Date          :  17 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int SumEvenElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iSum = iSum + Arr[i];
        }
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

    iRet = SumEvenElements(arr, iSize);
    printf("Summation of all Even elements are : %d\n", iRet);

    return 0;
}