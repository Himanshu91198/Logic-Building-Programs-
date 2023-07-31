//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Check whether that character is present in the string or not.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define true 1
#define false 0

typedef int BOOL;


BOOL ChkChar(char *str, char ch)
{   
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    BOOL bRet = false;
    char cValue = '\0';

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);
    
    bRet = ChkChar(Arr,cValue);
    
    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}