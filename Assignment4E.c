#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float Percent = 0.0;

    Percent = (float)iNo2/iNo1*100;
    
    return Percent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%f",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%f",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%f",fRet);

    return 0;
}