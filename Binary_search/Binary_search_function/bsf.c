//With the help of function
#include<stdio.h>

int b_search(int ara[],int low,int high,int key){

    int mid =0;

    while(low<=high){

        mid = (low+high)/2;

        if(key==ara[mid]){

            break;

        }

        else if(key<ara[mid]){

            high = mid -1;//b_search(ara,low,mid-1,key);

        }

        else{

            low = mid -1;//b_search(ara,mid+1,high,key);

        }

    }

    return ara[mid];

}

int main(){

    int ara[]={1,4,6,8,10,11,12,13,25,20,30};

    int low_index =0;

    int high_index = 11;

    int mid_index;

    int number = 25;

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

    int result;

    result = b_search(ara,0,11,25);

    printf("%d is the number",result);

    return 0;

}
