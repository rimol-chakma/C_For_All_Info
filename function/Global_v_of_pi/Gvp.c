#include<stdio.h>

double pi =3.14;

void my_fnc(){

    pi = 3.1416;//here pi is called global variable that can may be changed

    return;//it'll continue without giving return

}

int main(){

   

   printf("%lf\n",pi);//here pi will be 3.14

    my_fnc();

    printf("%lf\n",pi);//pi will be 3.1416

    return 0;

}
