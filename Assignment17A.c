////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below pattern.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iNum = 0;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            iNum++;
            if(iNum > 9)
            {
                iNum = 1;
            }
            printf("%d\t",iNum);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);
    
    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}