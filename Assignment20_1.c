////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Maximum()  
// Description   :  Accept N numbers from user and return the largest number 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int i = 0, iMax = 0;

    if(Arr == NULL)
    {
        return -1;
    }

    iMax = Arr[0]; // compare the previous value to check the existing value is greater than previous or not 
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter The Elements : \n");

    for(iCnt = 0;iCnt <iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }
    
    iRet = Maximum(p, iSize);
    printf("Largest Number is %d", iRet);

    free(p);

    return 0;
}