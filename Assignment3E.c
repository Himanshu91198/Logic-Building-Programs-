/////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept number from user and return difference between summation of all its factors and non factors
///////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int Sum1 = 0;
    int Sum2 = 0;

    for(iCnt = 1;iCnt <= iNo - 1; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            Sum1 += iCnt;
        }
        if((iNo % iCnt) != 0)
        {
            Sum2 += iCnt;
        }
    }
    return Sum1 - Sum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
