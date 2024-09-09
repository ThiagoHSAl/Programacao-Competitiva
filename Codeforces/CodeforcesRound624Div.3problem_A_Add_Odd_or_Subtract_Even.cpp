#include <stdio.h>
#include <stdlib.h>
 
 
 
int main()
{
  int a,b,dif,n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d %d",&a,&b);
      dif=a-b;
      if(dif>0)
      {
          if(dif%2==0)
            printf("1\n");
          else
            printf("2\n");
      }
       if(dif<0)
      {
          if(dif%2==0)
            printf("2\n");
          else
            printf("1\n");
      }
      if(dif==0)
        printf("0\n");
  }
}