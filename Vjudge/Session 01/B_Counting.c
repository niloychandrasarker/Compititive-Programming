#include<stdio.h>
int main()
{
      int a,b;
      scanf("%d %d",&a,&b);
      int count = 0;
      for(int i=a ; i<=b ; i++)
      {
       count++;
      }
      
     printf("%d",count);
      return 0;
}