//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and accept one character. Return index of first occurence of that character.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{   
    int iPos = -1;
    int iCnt = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        str++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);
    
    iRet = FirstChar(Arr,cValue);
    
    printf("Character Location is: %d",iRet);

    return 0;
}