//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and off 7th  and 10th bit of that number if it is on. Return modified number.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0X00000040;
    UINT iMask2 = 0X00000200;
    UINT iResult = 0;

    iResult = iNo & (iMask1 | iMask2);
    if(iResult == (iMask1 | iMask2))
    {
        return (iNo ^ (iMask1 | iMask2));
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("%d",iRet);
    
    return 0;

}