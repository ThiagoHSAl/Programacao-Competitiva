#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,p=0,m=0,camisa,i;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&camisa);
        if(camisa==1)
            p++;
        if(camisa==2)
            m++;
    }
    scanf("%d",&camisa);
    if(camisa<=p)
    {
        scanf("%d",&camisa);
        if(camisa<=m)
            printf("S");
        else
            printf("N");
    }
    else
    {
        scanf("%d",&camisa);
        printf("N");
    }

    return 0;
}
