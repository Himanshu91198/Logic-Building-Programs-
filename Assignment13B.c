////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Design Application for Income Tax Department.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


float IncomeTax(int iAmount)
{
    float iTax = 0.0f;

    if((iAmount>500000) && (iAmount<1000000))
    {
        iTax = iAmount - (iAmount * 0.1);  
    }
    else if((iAmount>1000000) && (iAmount<2000000))
    {
        iTax = iAmount - (iAmount * 0.20);
    }
    else if(iAmount > 2000000)
    {
        iTax = iAmount - (iAmount * 0.30);
    }
    else
    {
        iTax = 0.0;
    }
    return (float)iTax;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Gross Income Amount: ");
    scanf("%d",&iValue);

    fRet = CalculateBill(iValue);

    if(fRet == 0.0)
    {
        printf("There is no Income Tax\n");
    }
    else
    {
        printf("%.2f\n",fRet);
    }

    return 0;
}