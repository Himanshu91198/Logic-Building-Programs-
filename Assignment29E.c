//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept one number from user and range of positions from user. Toggle all bits from that range. 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iStart, int iEnd)
{
    while(iStart <= iEnd)
    {
        iNo = iNo ^ 1 << iStart - 1;
        iStart++;
    }
    return iNo;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    int iBit1 = 0;
    int iBit2 = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    printf("Enter position: ");
    scanf("%d",&iBit1);

    printf("Enter position: ");
    scanf("%d",&iBit2);

    iRet = ToggleBit(iValue,iBit1,iBit2);

    printf("%d",iRet);

    return 0;
}