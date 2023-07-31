////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accpet N numbers from user check whether that numbers contains 11 in it or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL bflag = FALSE;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
            break;
        }
    }
    return bflag;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements: \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);

    return 0;
}