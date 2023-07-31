//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept two numbers from user and check whether 9th or 12th bit is ON or OFF.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0X800;
    UINT iMask2 = 0X100;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("9th or 12th Bit is ON");
    }
    else
    {
        printf("9th or 12th Bit is OFF");
    }

    return 0;
}