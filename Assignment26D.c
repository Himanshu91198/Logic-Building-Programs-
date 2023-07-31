//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which checks whether 7th & 8th & 9th bit is ON or OFF.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int bool;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
    int iMask = 0X1c0;
    int iResult = 0;

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
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th & 8th & 9th Bit is ON");
    }
    else
    {
        printf("7th & 8th & 9th Bit is OFF");
    }

    return 0;
}
