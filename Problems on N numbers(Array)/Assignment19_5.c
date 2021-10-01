////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and display summation of digits of each number.
// Input  : N : 3
//          Elements : 851 66 3 
// Output : 14 12 3
//
////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
void DigitsSum(int Arr[], int iLength)
{
    for (int i = 0; i < iLength; i++)
    {
        int rem = 0;
        int isum = 0;
        while (Arr[i] > 0)
        {
            rem = Arr[i] % 10;
            isum = isum + rem;
            Arr[i] = Arr[i] / 10;
        }
        printf("%d\t", isum);
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    printf("Enter number of elements");
    scanf("%d", &iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }
    DigitsSum(p, iSize);
    free(p);
    return 0;
}