#include<stdio.h>
int main(){
    int k,n,c;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    printf("%d in the binary number system is: \n",n);
    for(c=4;/*it will show only 4 digits of binary number from decimal.we can use it as 8,16,32,64 as well*/c>=0/*till c ==0*/;c--){
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
//using void function 
#include<stdio.h>
void decimal_to_binary(int n){
    int c,k;
    for(c=32;c>=0;c--){
        k = n>>c ;
    if(k&1)
        printf("1");
      else
        printf("0");
    }
    printf("\n");
}
int main(){
    int m;
    printf("Enter any decinal nunber : ");
    scanf("%d",&m);
    printf("%d in binary number system is:\n", m);
    decimal_to_binary(m);
    return 0;
}
