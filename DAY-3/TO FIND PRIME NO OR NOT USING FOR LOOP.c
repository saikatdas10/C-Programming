#include<stdio.h>
int main()
{
int i,c=0,n=7;
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
      c=c+1;
    }
  if(c==2)
{
  printf("The number is a prime no.");
}
  else
  {
    printf("The number is not a prime no.");
  }
return 0;
}
