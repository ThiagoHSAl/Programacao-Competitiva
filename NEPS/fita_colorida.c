#include <stdio.h>
#include <stdlib.h>

int main(){
    long int n;
    int fita[10000],i,j,k,contador1,contador2,verifica1,verifica2;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&fita[i]);
        }
    for(i=0;i<n;i++)
  {
      contador1=0;
      contador2=0;
      verifica1=0;
      verifica2=0;
     for(j=i;j<n;j++)
     {
         if(fita[j]==0)
         {
           verifica1=1;
           break;
         }
         contador1++;
     }
     for(k=i;k>=0;k--)
     {
         if(fita[k]==0)
         {
             verifica2=1;
            break;
         }
         contador2++;
     }
     if(i==0)
     {
         if(contador1>=9)
            printf("9 ");
         else
       printf("%d ",contador1);
     }

     else if(contador1<=contador2 && verifica1==1 || verifica2==0)
        {
         if(contador1>=9)
            printf("9 ");
         else
       printf("%d ",contador1);
     }
     else if(contador2<contador1 && verifica2==1 || verifica1==0)
       {
         if(contador2>=9)
            printf("9 ");
         else
       printf("%d ",contador2);
     }
  }
    return 0;
}
