///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which displays ASCII table. Table contains Symbol, Decimal, Hexadecimal and Octal representation of every memeber from 0 to 255.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    
    printf("ASCII Table\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0; iCnt<=255;iCnt++)
    {
        printf("%c\t%d\t%x\t\t%o\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{

    DisplayASCII();

    return 0;
}