#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, M;
	scanf("%d",&A);
	scanf("%d",&M);

    A+=M;
    if(A>50)
        printf("N");
    if(A<=50)
        printf("S");

    return 0;
}
