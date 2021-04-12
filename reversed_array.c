//array in reverse order
#include<stdio.h>
#define max 100
void main()
{
 int arr[max];
      int N, i;
     printf("enter the number of elements");
    scanf("%d",&N);
    for(i=0; i<N; i++) 
    {
     printf("enter the value of indexes:");
     scanf(" %d",&arr[i]);
    }
     printf("the real array is ");
   for(i=0; i<N; i++)
   {printf(" %d",arr[i]);
   }
    printf("\nthe reversed array is");
   for(i=N-1; i>=0; i--)
    printf(" %d",arr[i]);





}

  







