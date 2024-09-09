#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    B+=C;
    if(B%2==0)
        printf("Bino");
    if(B%2!=0)
        printf("Cino");

    return 0;
}
