#include<stdio.h>
void main()
{
  int y;
  printf("enter the year");
  scanf("&d",y);
  if(y%400==0)
  printf("the entered year is a leap year");
  else if(y%4==0)
  printf("the  entered year is a leap year");
  else if (y%100==0)
  printf("the entered year is not a leap year");
  else
  printf(the entered year is not a leap year);
}
