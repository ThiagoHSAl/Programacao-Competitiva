#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    int f;
    if (n>=1)
        f=n*fatorial(n-1);
    else
        f=1;
    return f;
}
int main(){    	
   int n;
    scanf("%d",&n);
    n=fatorial(n);
    printf("%d",n);
    return 0;
}
