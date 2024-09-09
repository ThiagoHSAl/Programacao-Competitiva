#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int a=0,b=0,n,press,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&press);
            if(press==1)
                a=!a;
            if(press==2)
                {
                  a=!a;
                  b=!b;
                }             
        }
    printf("%d\n", a);  
    printf("%d\n", b);
    return 0;
}
