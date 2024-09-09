#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c)
        printf("*");
    if(a==b && a!=c)
        printf("C");
    if(a==c && a!=b)
        printf("B");
    if(b==c && b!=a)
        printf("A");
    return 0;
}
