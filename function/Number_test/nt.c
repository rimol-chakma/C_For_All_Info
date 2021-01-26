#include<stdio.h>

int number_test(int x){

    int y = x;

    x = 2*y;

    return(x*y);

}

int main(){

    int x =10,y = 20,z = 30;//Here x,y & z is called local variable

    z = number_test(x);

    printf("%d %d %d\n",x,y,z);

    return 0;

    

}
