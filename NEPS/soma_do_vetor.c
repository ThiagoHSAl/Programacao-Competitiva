#include <stdio.h>
#include <stdlib.h>



void soma_vetor(int n, int v[]){
    int soma=0;
	for(int i=0;i<n;i++)
        soma+=v[i];
    printf("%d",soma) ;      
}

int main(){
	
	int n, v[100100];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		scanf("%d",&v[i]);
        soma_vetor(n,v);
}
