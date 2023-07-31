////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Design Application for Hotel.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float CalculateBill(int iAmount)
{
    float iDiscount = 0.0f;

    if((iAmount<1500) && (iAmount>500))
    {
        iDiscount = iAmount - (iAmount * 0.1);  
    }
    else if(iAmount>1500)
    {
        iDiscount = iAmount - (iAmount * 0.15);
    }
    else
    {
        iDiscount = 0.0;
    }
    return (float)iDiscount;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Total Bill Amount: ");
    scanf("%d",&iValue);

    fRet = CalculateBill(iValue);

    if(fRet == 0.0)
    {
        printf("There is no Discount\n");
    }
    else
    {
        printf("%.2f\n",fRet);
    }

    return 0;
}