#include <stdio.h>
#include <stdlib.h>
int i;
int removeDuplicate (int num[], int numSize)
{
    if (numSize==0)
    {
        return 0;
    }
    int uniqueNumber=0;
    for (i=1; i<numSize; i++)
    {
        if (num[i]!=num[uniqueNumber])
        {
        uniqueNumber++;
         num[uniqueNumber]=num[i];
        }
    }
    return uniqueNumber+1;
}

int main()
{
    int num[]={1,2,3,4,5,6,7,7,7,7,7,3,3,8,8,8,9};
    int numSize=sizeof (num)/sizeof(num[i]);


     printf ("The Original Array: ");
      for(i=0; i<numSize; i++)
       {
        printf("%d" ,num[i]);
       }
      printf("\nThe Original Length: %d", numSize);

    int newLength=removeDuplicate(num, numSize);

     printf ("\nArray After Removing Duplicates:");
       for (i=0; i < newLength; i++)
        {
        printf("%d", num[i]);
        }
     printf("\nNew array Length: %d\n" ,newLength);
     return 0;
}
