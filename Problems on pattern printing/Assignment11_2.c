/////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns from user and display below
// pattern.
//
// Input : iRow = 4 iCol = 4
// Output : A B C D
//          a b c d
//          A B C D
//          a b c d
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0', ch2 = '\0';
    for(i = 1, ch = 'A', ch2 = 'a'; i <= iRow; i++, ch++, ch2++)
    {
        for(j = 1, ch = 'A', ch2 = 'a'; j <= iCol; j++, ch++, ch2++)
        {
           if(i % 2 == 0)
           {
               printf("%c\t",ch);
           }
           else
           {
               printf("%c\t",ch2);
           }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter rows:");
    scanf("%d",&iValue1);
    printf("Enter Columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}