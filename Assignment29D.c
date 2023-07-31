//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF. 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iPos1, int iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);

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
    int iBit1 = 0;
    int iBit2 = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    printf("Enter position: ");
    scanf("%d",&iBit1);

    printf("Enter position: ");
    scanf("%d",&iBit2);

    bRet = ChkBit(iValue,iBit1,iBit2);

    if(bRet == TRUE)
    {
        printf("%d or %d Bit is ON",iBit1,iBit2);
    }
    else
    {
        printf("%d or %d Bit is OFF",iBit1,iBit2);
    }

    return 0;
}