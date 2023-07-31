////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as NO, return index of last occurence of that NO.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0;iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    int iRet = 0;

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

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such elements\n");
    }
    else
    {
        printf("Last Occurence of number is %d",iRet);
    }

    free(p);

    return 0;
}