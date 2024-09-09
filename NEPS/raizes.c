#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){    	
    int n;
    double number;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%lf",&number);
            number=sqrt(number);
            printf("%.4lf\n",number);
        }

    return 0;
}
