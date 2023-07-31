////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Accept N numbers from user and return product of all odd elements.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProd = 1;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProd *= Arr[iCnt];
        }
    }
    return iProd;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iProd = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter number %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);

    if(iRet == 1)
    {
        printf("%d",iProd);
    }
    else
    {
    printf("%d",iRet);
    }

    free(p);

    return 0;
}