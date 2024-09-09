#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int L,C,N,i,quebra=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
            scanf("%d",&L);
            scanf("%d",&C);
            if(L>C)
                quebra+=C;
        }
    printf("%d",quebra);
    return 0;
}
