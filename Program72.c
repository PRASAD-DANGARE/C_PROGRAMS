///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Search An Element And Find The First Index Of That Number Using Array
// Author        :  Prasad Dangare
// Date          :  17 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iValue)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iValue)
        {
            break;
        }
    }
    if(i == iLength)
    {
        return -1;
    }
    else
    {
        return i;
    }
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
    
    if(iRet == -1)
    {
        printf("Number Not Found");
    }
    else
    {
        printf("First Occurance is at : %d\n", iRet);
    }

    free(arr);

    return 0;
}