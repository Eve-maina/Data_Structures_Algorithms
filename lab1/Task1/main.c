#include <stdio.h>
#include <stdlib.h>

int Summation (int Data[], int n);
int maximum (int Data[],int n);
int i,sum, max;


int main()
{
  int n;
  printf("Enter the length of the Array");
  scanf("%d", &n);
  if (n<0)
    {
      printf("Invalid Array!!\n");
    }
   int *Data= (int*) calloc (n,sizeof (int));
   if (Data ==NULL)
       {
           printf("Memory Allocation Failed\n");
       }
    printf("Enter %d values for the Array\n" ,n);
     for (i=0; i<n; i++)
     {
         printf("Enter Value #%d:" ,i+1);
         scanf("%d" ,&Data[i]);
     }
   sum= Summation(Data,n);
   printf("The Sum of the values is %d\n" ,sum);

   max=maximum (Data,n);
   printf("The Maximum Value is %d\n" ,max);
    free(Data);
   return 0;
}
int Summation (int Data [],int n)
{
    int sum=0;
    for (i=0; i<n; i++)
    {
       sum+=Data[i];
    }
    return sum;
}
int maximum (int Data[], int n)
{
    int max= Data[0];
    for (i=1; i<n; i++)
    {
        if (Data[i]>max)
          max=Data[i];
    }
    return max;
}
