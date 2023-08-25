#include<stdio.h>
int cube(int n)
{
 if(n==1)
    return 1;
 else
    return (n*n*n)+cube(n-1);
}
int main()
{
 int n,a;
 printf("enter number");
 scanf("%d",&n);
 a=cube(n);
 printf("\n cube of n numbers=%d",a);
}
