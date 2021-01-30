//find one fixed value from array with the help of binary search.
#include<stdio.h>
int main(){
    int ara[]={1,4,6,8,10,11,12,13,25,20,30};
    int low_index =0;
    int high_index = 11;
    int mid_index;
    int number = 25;//let the number which we want to print is 25
    while(low_index<=high_index){
        mid_index =(low_index+high_index)/2;
        if(number==ara[mid_index]){
            break;
        }
     if(number<ara[mid_index]){
            high_index=mid_index-1;
        }
        else{
            low_index=mid_index+1;
        }
    }
    if(low_index>high_index){
        printf("%d is not in the array\n",number);
    }
    else{
        printf("%d is found in the array.And it is the %dth element of the array.\n",ara[mid_index],mid_index);
    }
    return 0;
}
//Another method
#include<stdio.h>
int main(){
    int ara[]={2,3,4,5,10,11,23,56,78};
    int left_index=0;
    int right_index =8;
    int mid_point=0;
    int target = 56;
    while(left_index<=right_index){
     mid_point = (left_index+right_index)/2;
        if(target==ara[mid_point]){
            break;
        }
        else if(target<ara[mid_point]){
            right_index = mid_point-1;
        }
        else{
            left_index= mid_point+1;
        }
     }
        printf("%d is the target number",ara[mid_point]);
    return 0;
   }
