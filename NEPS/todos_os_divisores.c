#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int x,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        if(x%i==0)
            printf("%d ",i);
    return 0;
}
