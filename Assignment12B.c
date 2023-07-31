////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return the smallest number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;

}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter number %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}
    