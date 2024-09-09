#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x,y;
    scanf("%lf %lf",&x,&y);
    x=pow(x,y);
    printf("%.4lf",x);
    return 0;
}
