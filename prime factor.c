//prime factor

#include<stdio.h>
void main()

{

   int num;
   printf("enter the number\n");
   scanf("%d", &num);

  for(int i=2;num>1; i++)
{
   while(num%i == 0)
  {
    printf("%d",i);
    num = num/i; 
  }
}




}