//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accpet string from user and return difference between frequency of small characters and frequency of capital characters.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapitalCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCnt++;
        }
        str++;
    }
    return (iSmallCnt - iCapitalCnt);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}