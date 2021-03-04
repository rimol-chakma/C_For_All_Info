#include<stdio.h>

int main(){

int ara[] = {5,7,3,8,9,11};

int i,j,n,swap;

n = 6;

  for(i = 0;i<n;i++){//for array

      for(j = 0;j<n-i-1;j++){//for comparing between two array and it will execute till n-i-1 or n-2 or n-3 whatever

            if(ara[j]>ara[j+1]){//if first element of these array is greater than second element

                swap = ara[j];

                ara[j]=ara[j+1];//then we swap first element to the 2nd element 

               ara[j+1] = swap;//and 2nd element swap to the first.

            }

        }

       

     }

    for(i = 0;i<n;i++){

        printf("%d\n",ara[i]);

      }

    return 0;

   }
