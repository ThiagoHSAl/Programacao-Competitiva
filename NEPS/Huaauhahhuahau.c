#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char risada[51],compara1[51]={},compara2[51]={};
    int i,j=0,tamanho;
    const char *vogais = "aeiou";
    fgets(risada,sizeof(risada),stdin);
    tamanho=strlen(risada);
    if(risada[tamanho-1]=='\n')
    {
        risada[tamanho-1]='\0';
        tamanho--;
    }
    for(i=0;i<tamanho;i++)
    {
        if (strchr(vogais, risada[i]) != NULL) {
            compara1[j]=risada[i];
            j++;
        }
    }
    compara1[j]='\0';
    j=0;
    for(i=tamanho-1;i>=0;i--)
    {
        if (strchr(vogais, risada[i]) != NULL) {
            compara2[j]=risada[i];
            j++;
        }
    }
    compara2[j]='\0';
    if(strcmp(compara1,compara2)==0)
        printf("S");
    else
        printf("N");

    return 0;
}
