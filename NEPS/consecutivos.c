#include <stdio.h>
#include <stdlib.h>

int main(){    	
    long int n;
    int v[10000],i,verifica,contador1=1,contador2=0;
    scanf("%ld",&n); 
    for(i=0;i<n;i++)
        {
            scanf("%d",&v[i]);
        }
    verifica=v[0];
    for(i=1;i<n;i++)
        {
          if(verifica==v[i])
              {
                contador1++;
                  if(contador2<=contador1)
                      contador2=contador1;
              }
            if(verifica!=v[i])
                {
                   verifica=v[i];
                    contador1=1;
                }                     
        }
    printf("%d",contador2);
    return 0;
}
