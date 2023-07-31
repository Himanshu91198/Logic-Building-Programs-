//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and position from user and ON that bit. Return modified number.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid position");
        return -1;
    }

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo | iMask;
    if(iResult == iMask)
    {
        return (iNo |(~iMask));
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    int iBit = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter position: ");
    scanf("%d",&iBit);

    iRet = OnBit(iValue,iBit);

    printf("%d",iRet);
    
    return 0;
}
