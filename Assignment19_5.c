////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Product()  
// Description   :  Accept Number From User & Find Product Of Odd Numbers
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int i = 0, iMult = 1;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iMult = iMult * Arr[i];
        }
    }
    return iMult;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number Of Elements : ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable To Allocate Memory");
        return -1;
    }

    printf("Enter The Elements : \n");

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p, iSize);

    printf("Product Of All Odd Numbers Is :  %d", iRet);

    free(p);

    return 0;
}