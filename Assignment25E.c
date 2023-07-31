//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and columns from user and display below pattern.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{   
    int i = 0;
    int j = 0;

    for(i = 1;i<=iRow+1;i++)
    {
        for(j = 1;j<=iCol+1;j++)
        {
            if(i == j)
            {
                printf("%d\t",i);
            }
            else if(i == 1 || i == iRow+1)
            {
                printf("%d\t",j);
            }
            else if(j == 1 || j == iCol+1)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of rows: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}