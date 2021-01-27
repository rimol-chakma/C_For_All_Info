//find-mini

#include<stdio.h>

int find_mini(int ara[],int n){

    int mini = ara[0];

    int i;

    for(i = 1;i<n;i++){

        if(ara[i]< mini){

            mini = ara[i];

        }

    }

    return mini;

}

int main(){

    int ara[] = {-100,0,53,76,89,98,-344,37,98,101,102};

    int n =11;

   int mini = find_mini(ara,n);

    printf("The minimum number is %d",mini);

    return 0;

   }
