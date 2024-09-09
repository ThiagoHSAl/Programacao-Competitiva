#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,acertos=0;
    char gabarito[80],questao;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
        {
            scanf("%c",&gabarito[i]);
        }
        getchar();
    for(i=0;i<n;i++)
        {
            scanf("%c",&questao);
            if(questao==gabarito[i])
                acertos++;
        }
    printf("%d",acertos);
    return 0;
}
