//Array simple example
#include<stdio.h>

 

int main(){

    int ara[4] = {5,10,15,20};

    ara[0] = 100;

    ara[2] = 200;

    ara[3] = 300;

    printf("%d,%d,,%d,%d\n",ara[0],ara[1],ara[2],ara[3]);

    return 0;

}








//Array's easy method to placing alternatively of index 

#include<stdio.h>

int main(){

    int ara[10]= {10,20,30,40,50,60,70,80,90,100};

    int j;

    for(j = 9; j>=0; j--){

        printf("The element is %d\n",ara[j]);

    }

    return 0;

}
//Complex method as like as before

#include<stdio.h>

int main(){

    int ara[]= {10,20,30,40,50,60,70,80,90,100};

    int i,j;

    int ara2[10];

    for(i = 0,j= 9; i<10;i++,j--){

        ara2[j] = ara[i];

    }

    for(i = 0; i<10;i++){

        ara[i] = ara2[i];

    }

    for(i = 0;i<10;i++){

        printf("%d\n",ara[i]);

    }

    return 0;

}
