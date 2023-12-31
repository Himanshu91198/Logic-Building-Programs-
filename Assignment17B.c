////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept number of rows and number of columns from user and display below pattern.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    
    

    for(i = 1;i <= iRow;i++)
    {
        int odd = 1;
        int even = 1;
        if(i % 2 == 0)
        {
            for(j = 1;j <= iCol;j++)
            {
                printf("%d\t",odd);
                odd += 2;
            }
        }
        else
        {
            for(j = 1;j <= iCol;j++)
            {
                printf("%d\t",even * 2);
                even++;
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
    
    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}