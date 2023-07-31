////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as NO, check whether NO is present or not.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bflag = FALSE;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return bflag;
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
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
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
}