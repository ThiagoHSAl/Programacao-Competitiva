#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,number[10000],i,contador=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
          scanf("%d",&number[i]);
        }
        for(i=0;i<n-2;i++)
        {
            if(number[i]==1)
                if(number[i+1]==0)
                if(number[i+2]==0)
                contador++;
        }
    printf("%d",contador);
    return 0;
}
