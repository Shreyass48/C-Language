/////////////////////////////////////////////////////////////////////////////
//
// Accept string and  from user and cheak whether it is palindrome or not.
// Input  :  dad
// Output :  string is palindrome!
// Date   : 11/10/21
//
////////////////////////////////////////////////////////////////////////////
// Time comp = (n + n/2)
#include<stdio.h>
#include<stdbool.h>

bool checkPallindrome(char *Str)
{
    char *start = NULL;
    char *end = NULL;
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
            break;
        }
        start++;
        end--;
    }

    if(start < end)    //strt small asl tr palindrome nahi
    {
        return false;
    }
    else
    {
        return true;
    }
    
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