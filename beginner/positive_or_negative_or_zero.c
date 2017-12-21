#include<stdio.h>
int main(void)
{
int a;
printf ("enter a number");
scanf ("%d",&a);
if (a>0)
{
printf("entered number is positive");
}
else if(a<0)
{
printf("entered number is negative");
}
else
{
printf("entered number is zero");
}
}
