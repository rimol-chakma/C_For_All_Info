#include<stdio.h>

int is_prime_number(int n){

    int i;

    if(n<2){

        return 0;//boolean false

    }

    if(n==2){

        return 1;

    }

    if(n%2==0){

        return 0;

    }

    for(i=3;i<=n/2/*if we put input as 47,so in this case i<=47/2 will be 23 which is a prime number and it executes out of for loop */;i=i+2){
//for odd numbers
        if(n%i==0){

            return 0;//boolean false

        }

    }

    return 1;//boolean true

}

int main(){

    int n;

    while(1)//it will execute till the break statement & it means boolean true.

    {

        printf("Please enter a number: ");

        scanf("%d",&n);

       if(1==is_prime_number(n)){

       printf("%d is a prime number.\n",n);   

        }

        else{

            printf("%d is not the prime number\n",n);

        }

      if(n==0){

            break;

        }

    }

    return 0;//return 0 & return 1 both are same in main function.

}
