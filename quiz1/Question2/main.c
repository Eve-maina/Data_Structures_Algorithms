#include <stdio.h>
#include <stdlib.h>

int i;
void rotateRightbyOne(int arr[],int n)
{
int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        {
        arr[i] = arr[i - 1];
        }
    arr[0] = temp;

}

void rotateRight (int arr[],int n, int k)
{
    for(i=0;i<k;i++)
    {
      rotateRightbyOne (arr,n);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("The Original array:");
     for (i=0; i<n;i++)
     {
         printf("%d", arr[i]);
     }
      printf("\n");

     rotateRight(arr, n, k);


     printf("Rotated Array After %d steps:", k);
      for (i=0; i<n; i++)
      {
          printf("%d",arr[i]);
      }

      return 0;
}
