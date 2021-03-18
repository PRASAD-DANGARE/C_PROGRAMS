///////////////////////////////////////////////////////////
//
// Function Name :  Pattern()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept Number From User & Display That Number Using Array
// Author        :  Prasad Dangare
// Date          :  17 Mar 2021
//
///////////////////////////////////////////////////////////


// accept N numbers from user and display that number

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize) // step 6 address of elements & elements get here
{
    int i = 0;
    printf("Elements From The Array Are : \n");
    for(i = 0; i < iSize; i++)
    {
        printf("%d\n", Arr[i]); // display the array ele
    }
}
int main()
{
    int *arr = NULL; // step 1, arr is the name of pointer
    int iLength = 0, i = 0;

    printf("Enter The Number of elements : "); // step 2
    scanf("%d", &iLength);

    arr = (int*) malloc (iLength * sizeof(int)); // step 3 array allocating memory dynamically, typecasting arr = (int*)

    printf("Enter Thee Elements : \n"); // step 4 accept no in array 
    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &arr[i]); 
    }

    Display(arr, iLength); // step 5 arr contain address

    free(arr); // step 7 Deallocate the memory

    return 0;
}