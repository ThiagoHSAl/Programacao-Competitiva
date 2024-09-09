#include <stdio.h>
#include <stdlib.h>
 
int main(){    	
    int n,a,b,i,incremento;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            if(a%b==0)
                printf("0\n");
            else
             {
              incremento=b-(a%b);   
              printf("%d\n",incremento);    
             } 
              
        }
}
