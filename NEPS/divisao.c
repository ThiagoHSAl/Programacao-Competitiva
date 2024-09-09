#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	double A, B;
	scanf("%lf",&A);
	scanf("%lf",&B);

    A/=B;
    printf("%.2lf",A);

    return 0;
}
