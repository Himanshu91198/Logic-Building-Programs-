////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Design Application for Tourist Company.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int TouristBill(int iKilometer)
{
    int iRent = 0;

    if(iKilometer < 100)
    {
        iRent = iKilometer * 25;
    }
    else if(iKilometer > 100)
    {
        iRent = (iKilometer * 15) + 1000;
    }
    else
    {
        iRent = 0;
    }
    return iRent;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Kilometer : ");
    scanf("%d",&iValue);

    iRet = TouristBill(iValue);

    if(iRet == 0)
    {
        printf("Invalid Kilometers Entered\n");
    }
    else
    {
        printf("%d\n",iRet);
    }

    return 0;
}