///////////////////////////////////////////////////////////
//
// Function Name :  main()
// Input         :  Integer
// Output        :  Integer
// Description   :  Accept String & Display The String On Screen
// Author        :  Prasad Dangare
// Date          :  22 Mar 2021
//
///////////////////////////////////////////////////////////


#include <stdio.h>

int main()
{
    char Arr[40];

    printf("Enter Your Name : ");
    scanf("%[^'\n']s", Arr); // regular expression
    //fgets(Arr, 40, stdin); fgets(kasat, keti, kuthun)
    //gets(Arr);
    //scanf("%s", Arr);

    printf("Your Name Is : %s\n", Arr);

    return 0;
}