#include<stdio.h>
void main()
{
int n,reverse=0,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while (temp!=0)
{
  reverse=reverse*10;
  reverse=reverse+temp%10;
  temp=temp/10;
  }
  if(n==reverese)
  {
    printf("palindrome");
   }
   else 
   {
   printf("not a palindrome");
   }
   
 }
