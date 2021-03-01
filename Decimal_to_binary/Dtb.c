#include<stdio.h>
int main(){
    int k,n,c;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("%d in the binary number system is: \n",n);
    for(c=4;/*it will show only 4 digits of binary number from decimal.we can use it as 8,16,32,64 as well*/c>=0;c--){
        k= n>>c;//right shift operator
      if(k&1/*it means the value of k will be executed if only if both digits are 1.otherwise it will execute 0 as like as AND operator in binary number syatem.*/){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
