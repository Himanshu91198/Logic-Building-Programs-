//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
    int iPos = 1;

    while(iNo1 != 0 || iNo2 != 0)
    {
        if((iNo1 & 1) == (iNo2 & 1))
        {
            printf("%d \t",iPos);
        }
        iNo1 >>= 1;
        iNo2 >>= 1;
        iPos++;
    }
    

}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue1);
    
    printf("Enter number: ");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}