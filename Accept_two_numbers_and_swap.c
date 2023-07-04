#include<stdio.h>
int main()
{
 int a,b,t;
 printf("enter first number");
 scanf("%d",&a);
 printf("enter second number");
 scanf("%d",&b);
 t=a;
 a=b;
 b=t;
 printf("\n value of a=%d",a);
 printf("\n value of b=%d",b);
}
