#include<stdio.h>

void bubble_sort(int ara[],int n){

    int i,j,swap;

    for(i = 0;i<n;i++){

      for(j = 0; j<n-i-1;j++){

          if(ara[j]>ara[j+1]){

                swap = ara[j];

                ara[j]= ara[j+1];

                ara[j+1]= swap;

            }

        }

    }  

   for(i = 0;i<n;i++){

        printf("  %d  ",ara[i]);

    } 

}

int main(){

    int ara[]={6,4,8,9,2,11,12,1,3,20};

    int m = 10;

    bubble_sort(ara,m);

    return 0;

}
