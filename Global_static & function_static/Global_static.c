//Global static variable
#include<stdio.h>

int a=10;
static int b=10;
void fnc()
{
    a = a+1;
    b = b+1;
}
int main()
{
    fnc();
    printf("%d\n",a);
    printf("%d\n",b);
    
}