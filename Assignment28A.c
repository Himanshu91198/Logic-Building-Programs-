//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and position from user and check whether bit at that position is on or off. if bit is one return TRUE otherwise return false.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid position");
        return FALSE;
    }

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    int iBit = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter position: ");
    scanf("%d",&iBit);

    bRet = ChkBit(iValue,iBit);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
