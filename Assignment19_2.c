////////////////////////////////////////////////////////////////////////////
//
// Function Name :  FirstOcc()  
// Description   :  Accept 2 Input From User & Find First Occurance Of That Number
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
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

    iRet = FirstOcc(arr, iSize, iNo);
    
    if(iRet == -1)
    {
        printf("No Such Numbers");
    }
    else
    {
        printf("First Occurance Found At Index : %d\n", iRet);
    }

    free(arr);

    return 0;
}