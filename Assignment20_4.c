////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Maximum()  
// Description   :  Accept N numbers from user and display all such numbers which contains 3 digits in it
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0;

    printf("3 Digit Numbers Are : \n");
    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] > 99) && (Arr[i] <= 999))
        {
            printf("%d\n", Arr[i]);
        }

        if((Arr[i] <- 99) && (Arr[i] >=- 999))
        {
            printf("%d\n", Arr[i]);
        }
    }

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d", &iSize);

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

    Digits(p, iSize);

    free(p);

    return 0;

}