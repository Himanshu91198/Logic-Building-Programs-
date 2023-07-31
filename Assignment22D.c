//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WWrite a program which accept string from user and check whether it contains vowels in it or not.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bflag = FALSE;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
        {
            bflag = TRUE;
        }
        str++;
    }
    return bflag;
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contains vowels");
    }
    else
    {
        printf("It does not contains vowels");
    }

    return 0;
}