//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and position from user and toggle that bit. Return modified number.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
    
    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    return iResult;
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

    iRet = ToggleBit(iValue,iBit);

    printf("%d",iRet);

    return 0;
}