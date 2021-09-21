/////////////////////////////////////////////////////////////////////////////
//
// Accept no from user and Display following pattern.
// Input  : 6
// iCnt   : 1 2 3 4 5 6
// Output : * # * # * #
// Date   : 20/09/21
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int);

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)   
    {             
        if((iCnt % 2) == 0)           // Logic using If else
        {
            printf("#\t");  
        }   
        else
        {
            printf("*\t");  
        }                         
              
        
    }

}