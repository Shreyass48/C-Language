////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns from user and display below pattern.
// Input : iRow = 3 iCol = 4
// Output : 1 1 1 1
//          2 2 2 2
//          3 3 3 3
//         
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo1, int iNo2)
{
    int iCnt = 0, iCntt = 0;
    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        for(iCntt = 1; iCntt <= iNo2; iCntt++)
        {
            printf("%d\t",iCnt);
        }
       
        printf("\n");
    }

}

int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter number of Rows:");
    scanf("%d",&iRow);
    printf("Enter number of Columns:");
    scanf("%d",&iCol);

    Pattern(iRow, iCol);

    return 0;
}