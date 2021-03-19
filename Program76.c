///////////////////////////////////////////////////////////
//
// Function Name :  Frequency()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Find Smallest Elements
// Author        :  Prasad Dangare
// Date          :  17 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0, iMin = 0;
    if(Arr == NULL)
    {
        return -1;
    }
    iMin = Arr[0];
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

    iRet = Minimum(arr, iSize);
    printf("Smallest Number Is : %d\n", iRet);

    free(arr);

    return 0;
}