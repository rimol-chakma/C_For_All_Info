//find_sum()

#include<stdio.h>

int find_sum(int ara[],int n){

    int i;

      int sum;

    sum = ara[0];

    for(i=1;i<n;i++){

      sum = sum + ara[i];

        }

        return sum;

       }

int main(){

    int ara[] = {100,200,300,400,500,600};

    int n = 6;

   int sum = find_sum(ara,n);

    printf("%d",sum);

    return 0;

   }
