//Find_max
#include<stdio.h>
int find_max(int ara[],int n){
    int max= ara[0];
    int i;
    for(i=1;i<n;i++){
        if(ara[i]>max){
            max = ara[i];
        }
      }
        return max;
    }
int main(){
    int ara[] = {-100,0,53,76,89,98,-344,37,98,101,102};
    int n =11;
   int max = find_max(ara,n);
    printf("%d",max);
    return 0;
}
