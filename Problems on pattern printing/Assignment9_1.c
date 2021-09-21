//////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
// Input   : 5
// Output  : A B C D E
//
//////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
   
    int iCnt = 0;
    for(iCnt = 65; iCnt < (65 + iNo); iCnt++)       // 65 ASCII value of 'A'
    {
        printf("%c\t",iCnt);                        // %c for printing char to 65 position(A).
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of element:");
    scanf("%d",&iValue);
     if(iValue > 26)
    {
        printf("Invalid!");
    }
    else
    {
        Display(iValue);
    }
    return 0;
}