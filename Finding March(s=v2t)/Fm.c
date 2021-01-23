#include<stdio.h>

int main(){
    double v,t,s;
    printf("Enter final velocity: ");
    scanf("%lf",&v);
    printf("Enter initial time: ");
    scanf("%lf",&t);
    s = v*2*t;
    printf("The result will be %0.2lf\n",s);
    return 0;
}
