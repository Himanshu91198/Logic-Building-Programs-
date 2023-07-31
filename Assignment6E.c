#include<stdio.h>

void RevTable(int iNo)
{
    int iCnt = 0;
    int Mult = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >=1;iCnt--)
    {
        Mult = iNo * iCnt;
        printf("%d\t",Mult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    RevTable(iValue);

    return 0;
}