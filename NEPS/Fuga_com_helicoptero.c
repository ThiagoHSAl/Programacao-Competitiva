#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[16]={0},h,p,f,i,achei=0,sentido;
    scanf("%d %d %d %d",&h,&p,&f,&sentido);
    v[h]=1;
    v[p]=2;
    v[f]=3;
    if (sentido == 1)
    {
      for(i=0;i<16;i++)
    {
       if(v[i]==3)
        achei=1;
       if(achei==1 && v[i]==1)
       {
           printf("S");
           break;
       }
       if(achei==1 && v[i]==2)
       {
           printf("N");
           break;
       }
    }
    if(i==16)
    {
     if(h<p)
        printf("S");
     else
        printf("N");
    }

    }
    if(sentido == -1)
    {
        for(i=15;i>=0;i--)
        {
       if(v[i]==3)
        achei=1;
       if(achei==1 && v[i]==1)
       {
           printf("S");
           break;
       }
       if(achei==1 && v[i]==2)
       {
           printf("N");
           break;
       }
    }
    if(i==-1)
    {
     if(h>p)
        printf("S");
     else
        printf("N");
    }
    }

}
