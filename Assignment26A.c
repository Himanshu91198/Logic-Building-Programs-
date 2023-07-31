//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which checks whether 15th bit is ON or OFF.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int bool;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

bool ChkBit(UINT iNo)
{
    int iMask = 0X4000;
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
        printf("15th Bit is ON");
    }
    else
    {
        printf("15th Bit is OFF");
    }

    return 0;
}
