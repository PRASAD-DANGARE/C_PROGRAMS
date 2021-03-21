////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Even()  
// Description   :  Accept Number From User & Display Elements Which Are Divisible By 5 
// Input         :  Integer
// Output        :  Integer
// Author        :  Prasad Dangare
// Date          :  19 Mar 2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

void Even(int Arr[], int iSize)
{
    int i = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return;
    }

    printf("Elements Divisible By 5 Are : \n");
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf("%d\n", Arr[i]); 
        }
    }
}
int main()
{
    int *arr = NULL; // pointer
    int iLength = 0, i = 0;

    printf("Enter Number Of Elements : ");
    scanf("%d", &iLength);

    arr = (int*)malloc(iLength * sizeof(int));
    if(arr == NULL)
    {
        printf("Unable To Allocate The Memory ");
        return -1;
    }

    printf("Enter Elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &arr[i]);
    }   

    Even(arr, iLength);

    free(arr);

    return 0; 
}