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
    printf("Enter any decimal nunber : ");
    scanf("%d",&m);
    printf("%d in binary number system is:\n", m);
    decimal_to_binary(m);
    return 0;
}
