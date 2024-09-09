#include <stdio.h>
#include <stdlib.h>

struct pais
{
    int index,ouro,prata,bronze;
};
int compare(struct pais i, struct pais j)
{
    if(i.ouro!=j.ouro)
        return i.ouro<j.ouro;
    if(i.prata!=j.prata)
        return i.prata<j.prata;
    if(i.bronze!=j.bronze)
        return i.bronze<j.bronze;
    return i.index>j.index;
}

void swap(struct pais *a, struct pais *b)
{
    struct pais troca=*a;
    *a=*b;
    *b=troca;
}
void sort (struct pais pais[], int n)
{
    for(int i=1;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        if(compare(pais[i],pais[j]))
        swap(&pais[i],&pais[j]);
}
int main()
{
    int paises,modalidades,i,ouro,prata,bronze;
    struct pais *pais;
    scanf("%d %d",&paises,&modalidades);
    pais=(struct pais*)malloc((paises+1)*sizeof(struct pais));

    for(i=0;i<=paises;i++)
    {
       pais[i].index=i;
       pais[i].ouro=0;
       pais[i].prata=0;
       pais[i].bronze=0;
    }

    for(i=0;i<modalidades;i++)
    {
        scanf("%d %d %d",&ouro,&prata,&bronze);
        pais[ouro].ouro++;
        pais[prata].prata++;
        pais[bronze].bronze++;
    }
   sort(pais,paises+1);

   for(i=1;i<=paises;i++)
    printf("%d ",pais[i].index);
}
