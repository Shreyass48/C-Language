/////////////////////////////////////////////////////////////////////////////
//
// Accept string and  from user and cheak whether it is palindrome or not.
// Input  :  dad
// Output :  string is palindrome!
// Date   : 11/10/21
//
////////////////////////////////////////////////////////////////////////////
// Time comp = (n + n/2)
//using flag
#include<stdio.h>
#include<stdbool.h>

bool checkPallindrome(char *Str)
{
    char *start = NULL;
    char *end = NULL;
    bool flag = true;
    start = Str;
    end = Str;

    while(*end != '\0')  //it finds end-1 location of string for (end)
    {
        end++;
    }
    end--;

    while (start < end)
    {
        if(*start != *end)   //for non palindrom strings
        {
            flag = false;
            break;
        }
        start++;
        end--;
    }
    return flag;
}

int main()
{
    char Arr[30];
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    bRet = checkPallindrome(Arr);

   if(bRet == true)
   {
       printf("String is Palindrome!\n");
   }
   else
   {
       printf("String is not Palindrome!\n");
   }

    return 0;
}