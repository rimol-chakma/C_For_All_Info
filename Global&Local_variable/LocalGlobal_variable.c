#include<stdio.h>

int x = 50;

void myfnc(int y)
{
    y = y*2;
    x = x+10;
    printf("X = %d and Y = %d",x,y);
    return;
}
int main()
{
    int y = 10;
    x = 10;
    myfnc(y);
    printf("\n");
    printf("X = %d and Y = %d",x,y);//Here x will be 20 because x is a global variable and y will be 10 because after calling myfnc(),y doesn't recognize myfnc().it does recognize only current value which has already assigned in main function.
}