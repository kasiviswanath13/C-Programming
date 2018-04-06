#include<stido.h>
void main()
{
  int n,c=0;i;
  printf("enter the number");
  scanf("%d",n);
 for (i=2;i<=n/2;i++)
 {
    if(n%i==0)
    
    {
      c++;
     }
     if(c==0)
     printf("its prime");
     else
     printf("not prime");
  }
}  
