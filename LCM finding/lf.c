

//find LCM

#include<stdio.h>

int main(){

     int n1,n2,rem,gcd,t,lcm;

    scanf("%d,%d",&n1,&n2);

    t = n1*n2;

    while(n2!=0){

        rem = n1%n2;

        n1 = n2;

        n2 = rem;

     }

        gcd = n1;

        lcm =t/gcd;

    printf("LCM is %d",lcm);

    return 0;

    

}
