#include <stdio.h>
#include <stdlib.h>
int i;

void findUniqueElement (int num[], int n)
{
    int findDuplicate=0;
    for (int i=0; i<n; i++)
    {
        findDuplicate=0;
        for (int j=0; j<n; j++)
        {
            if ( i!=j &&num [i]== num [j])
            {
               findDuplicate=1;
               break;
            }
        }
        if (!findDuplicate)
         {
           printf ("\nThe Unique Number is: %d",num[i]);
         }
    }

}
int main()
{
    int num[]={1,2,2,4,3,1,3};
    int n=sizeof (num)/sizeof (num[0]);
     printf("The Array is:");
     for (int i=0; i<n; i++)
     {
         printf("%d,",num[i]);
     }
     findUniqueElement(num,n);
     return 0;
}
