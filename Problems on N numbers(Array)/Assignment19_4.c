/////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and display all such numbers which contains
// 3 digits in it.
// Input  : N : 6
//          Elements : 851 66 3 661 93 88
// Output : 851 661
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
void Digits(int Arr[], int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] / 10 != 0 && Arr[i] / 100 != 0 && Arr[i] / 1000 == 0)
        {
            printf("%d\n", Arr[i]);
        }
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d", &iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements\n", iSize);
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    
    Digits(p, iSize);
    free(p);
    
    return 0;
}