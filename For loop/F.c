//for loop

#include<stdio.h>

int main()

{

    int n,i;

    n= 10;

    for(i=1;i<=10;i++){

        printf("%d × %d = %d\n",n,i,n*i);

    }

    return 0;

}

*/

//Another method of for loop

#include<stdio.h>

int main()

{

    int n,i;

    n= 5;

    i=1;

    for(;;){

        if(i>10){

            break;

        }

        printf("%d × %d = %d\n",n,i,n*i);

        i++;

    }

    return 0;

}
