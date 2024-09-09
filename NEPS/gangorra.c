#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int P1, C1, P2, C2;
	scanf("%d %d %d %d",&P1, &C1, &P2, &C2);

    P1*=C1;
    P2*=C2;
    if(P1>P2)
        printf("-1");
    if(P1==P2)
        printf("0");
    if(P1<P2)
        printf("1");

    return 0;
}
