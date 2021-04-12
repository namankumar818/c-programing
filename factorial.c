//factorial
#include<stdio.h>
void main()
{
 int a, f=1;
printf("enter the number\n");
scanf("%d",&a);
int i;
for(i=1; i<=a; i++)
 {
  f *= i;
 
  }
 printf("the factorial of %d is %d",a, f);



}
  







