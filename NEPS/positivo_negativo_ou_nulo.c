#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int X;
	scanf("%d",&X);

    if(X==0)
        printf("nulo");
    if(X>0)
        printf("positivo");
    if(X<0)
        printf("negativo");

    return 0;
}
