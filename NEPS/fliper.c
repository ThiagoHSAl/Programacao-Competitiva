#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d %d",&A, &B);

    if(A==0)
        printf("C");
    if(A==1 && B==0)
        printf("B");
    if(A==1 && B==1)
        printf("A");
    return 0;
}
