////////////////////////////////////////////////////////
//
// Function Name:   Star
// Input:           Integer
// Output:          Integer
// Description:     Accept no as input and print * 
// Author:          Shreyas Girish Kulkarni
// Date:            01/09/2021
//
////////////////////////////////////////////////////////
#include<stdio.h>

void Star(int iNum)
{
    int ict;
    for(ict=0; ict < iNum; ict++)
    {
        printf("*\t");
    }
}

int main()
{
   int iNo = 0;
   printf("Enter No\n");
   scanf("%d",&iNo);
   Star(iNo);
   return 0;

}