#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	double A, B;
	scanf("%lf",&A);
	scanf("%lf",&B);
    A+=B;
    A/=2;
    if(A>=7)
        printf("Aprovado");
    if(4<=A && A<7)
        printf("Recuperacao");
    if(A<4)
        printf("Reprovado");
    // Seu código vai aqui

    return 0;
}
