//Here a is the non static variable
//And x is the static variable
#include<stdio.h>

void fnc()
{
    int a = 10;
    static int x =10;
    x = x+2;
    a = a+2;
    printf("%d,%d\n",a,x);
}
int main()
{
    fnc();//12,12
    fnc();//12,14
    fnc();//12,16
}