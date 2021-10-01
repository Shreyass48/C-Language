/////////////////////////////////////////////////////////////////////////////
//
// Decimal Char ASCII table
// Date   : 29/09/21
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 0;
    printf("Ascii table is\n");
    printf("****************************************\n");
    printf("Decimal\tHexadecimal\tOctal\tASCII\n");
    printf("***************************************\n");

    for (i = 0; i < 127; i++) //127 = end
    {
        printf("%d\t %x\t %o\t %c\n", i, i, i, i); //c=char,x=hex,o=octal,d=ascii
    }
}

int main()
{

    Display();
    return 0;
}