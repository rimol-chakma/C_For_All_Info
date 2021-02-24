//find_final_result,using 2-D array 
#include<stdio.h>
int main(){
   double final_result[4][10]={
        {80,70,92,78,58,83,85,66,99,81},
        {75,67,55,100,91,84,79,61,90,97},
        {98,67,75,89,81,83,80,90,88,77},
        {0,0,0,0,0,0,0,0,0,0}
    };
    int col;
    for(col=0;col<10;col++){
    final_result[3][col]=final_result[0][col]/4.0 + final_result[1][col]/4.0+ final_result[2][col]/2.0;
        printf("Roll No:%d\t Total Marks: %0.0lf\n",col+1,final_result[3][col]);
    }
    return 0;
}
