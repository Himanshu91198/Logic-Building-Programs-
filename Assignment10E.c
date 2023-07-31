////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and accept one another number as NO, return frequency of No from it.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int ifreq = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            ifreq++;
        }
    }
    return ifreq;
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

    iRet = Frequency(p,iSize,iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}