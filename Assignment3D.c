/////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accpet number from user and return summation of all its non factors
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int Sum = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            Sum += iCnt; 
        }
    }
    return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}