//find_mini_max

#include<stdio.h>
int main(){
    int ara[]= {1,3,5,7,9};
    int min = ara[0];
    int i;
    int max = ara[1];
    for(i=1;i<4;i++){
        min = min + ara[i];
    }
    for(i =2;i<=4;i++){
        max = max + ara[i];
    }
    printf("%d %d",min,max);
    return 0;
}
