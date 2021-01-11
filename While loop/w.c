//while loop
#include<stdio.h>
int main()
{
    int n,i;
    n=10;
    i =1;
    while(i<=10){
        printf("%d × %d = %d\n", n,i,n*i);
        i++;
    }
    return 0;
}
//Another method using break 
#include<stdio.h>

int main()

{

  int n;

    n = 1;

    

    while(n<=100){

       printf("%d\n", n);

       n++;

        if(n>30){

            break;

        }

    }

   

    return 0;

}
//Another method using continue
#include<stdio.h>

int main()

{

    int n = 0;

    while(n<10){

        n++;

        if(n%2==0){

            continue;

            //for even numbers ,as a result of using continue ,programm doesn't execute here .It executes out of continue or it will print the odd numbers.

        }

        printf("%d\n",n);

        //it executes 

    }

    return 0;

}
