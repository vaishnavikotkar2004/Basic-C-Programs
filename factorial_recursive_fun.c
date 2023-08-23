#include<stdio.h>
int fact(int n)
{
 if(n==1)
    return 1;
 else
    return n*fact(n-1);
}
int main()
{
 int n,a;
 printf("enter limit");
 scanf("%d",&n);
 a=fact(n);
 printf("\n factorial of n numbers=%d",a);
}
