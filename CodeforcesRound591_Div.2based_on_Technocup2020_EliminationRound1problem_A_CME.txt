#include <stdlib.h>
 
int main(){
    int n,match,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&match);
            if(match==2)
                printf("2\n");
            else if(match%2==0)
                printf("0\n");
            else
                printf("1\n");
        }
    return 0;
}