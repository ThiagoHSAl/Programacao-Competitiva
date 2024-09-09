#include <stdio.h>
#include <stdlib.h>

int main(){
    long int a,b=0;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
          scanf("%ld",&a);
          b+=a;
          if(b>=1000000)
              break;
        }
     printf("%d",i);   
    return 0;
}
