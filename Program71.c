///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Search An Element & Find The Frequency Using Array
// Author        :  Prasad Dangare
// Date          :  17 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iValue)
{
    int i = 0, iCnt = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iValue)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{

    int * arr = NULL;
    int i = 0, iSize = 0, iRet = 0, iNo = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d", &iSize);

    arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter The Elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Elements you want to search : ");
    scanf("%d", &iNo);

    iRet = Frequency(arr, iSize, iNo);
    printf("Frequency is : %d\n", iRet);

    free(arr);

    return 0;
}