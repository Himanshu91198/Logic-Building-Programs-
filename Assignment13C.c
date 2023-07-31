////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Design Application for School Management System.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SchoolFees(int iStandard)
{
    int iFees = 0;

    if(iStandard == 1)
    {
        iFees = 8900;  
    }
    else if(iStandard == 2)
    {
        iFees = 12790;
    }
    else if(iStandard == 3)
    {
        iFees = 21000;
    }
    else if(iStandard == 4)
    {
        iFees = 23450;
    }
    else
    {
        iFees = 0;
    }
    return iFees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Standard : ");
    scanf("%d",&iValue);

    iRet = SchoolFees(iValue);

    if(iRet == 0)
    {
        printf("Invalid Standard\n");
    }
    else
    {
        printf("%d\n",iRet);
    }

    return 0;
}