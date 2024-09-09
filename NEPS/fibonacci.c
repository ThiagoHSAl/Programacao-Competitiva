#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,n_1=1,n_2=0,fibonacci;
    scanf("%d",&n);
    if(n==0)
        printf("1");
    else
        {
          for(i=0;i<n;i++)  
              {
                fibonacci=n_1+n_2;
                  n_2=n_1;
                  n_1=fibonacci;              
              }
            printf("%d",fibonacci);
        }

    return 0;
}
