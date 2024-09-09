#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,matriz[10][10],soma=0,verifica=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&matriz[i][j]);
    for(i=0;i<n;i++)
        {

          for(j=0;j<n;j++)
              {
                  if(i==0)
                    verifica+=matriz[i][j];
                  soma+=matriz[i][j];
              }
            if(verifica!=soma)
              {
                soma=-1;
                break;
              }
          soma=0;
        }
        if(soma!=-1)
        {
            for(i=0;i<n;i++)
             {

                for(j=0;j<n;j++)
                 {
                  soma+=matriz[j][i];
                 }
               if(verifica!=soma)
               {
                soma=-1;
                break;
               }
                soma=0;
              }
        }
        if(soma!=-1)
        {
            for(i=0;i<n;i++)
             soma+=matriz[i][i];

           if(soma!=verifica)
            soma=-1;
        }
        if(soma!=-1)
        {
            soma=0;
            for(i=0;i<n;i++)
             soma+=matriz[i][n-1-i];
           if(soma!=verifica)
            soma=-1;
        }
        printf("%d",soma);
    return 0;
}
