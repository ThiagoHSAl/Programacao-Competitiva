#include <stdlib.h>
#include <stdio.h>
int main(){
    int n,size,*prices,i,j,count,min_price;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            count=0;
            scanf("%d",&size);
            prices=(int *)malloc(sizeof(int)*size);
            for(j=0;j<size;j++)
                scanf("%d",&prices[j]);
            min_price=prices[size-1];
            for(j=size-2;j>=0;j--)
                {
                    if(prices[j]>min_price)
                        count++;
                    else
                        min_price=prices[j];
                }
          printf("%d\n",count);     
        }
    return 0;
}
