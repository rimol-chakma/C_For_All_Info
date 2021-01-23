//GCD finding

#include<stdio.h>

int main(){

    int n1,n2,rem,gcd;

    scanf("%d,%d",&n1,&n2);

    while(n2!=0){

        rem = n1%n2;

        n1 = n2;

        n2 = rem;

    }

    gcd = n1;

    printf("GCD is %d",gcd);

    return 0;

}
