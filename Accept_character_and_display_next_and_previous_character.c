#include<stdio.h>
int main()
{
 char ch;
 printf("enter character");
 scanf("%c",&ch);
 ch=ch+1;
 printf("\n next character=%c",ch);
 ch=ch-2;
 printf("\n previous character=%c",ch);
}
