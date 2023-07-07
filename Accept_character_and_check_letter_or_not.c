#include<stdio.h>
int main()
{
 char ch;
 printf("enter character");
 scanf("%c",&ch);
 if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
   printf("its a letter");
 else
   printf("its not a letter");
}
