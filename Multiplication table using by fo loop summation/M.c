#include<stdio.h>

int main()

{

    int s,n;

    printf("Enter a number : ");

  scanf("%d",& n);

    printf("the multiplication table will be\n");

    int i;

    s= 0;

    for(i=1;i<=10;i++){

        s= s + n;

        printf("%d × %d = %d\n",n,i,s);

    }

    return 0;

}
