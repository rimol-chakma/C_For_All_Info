//print_the_value_of_2-D array 
#include<stdio.h>
int main(){
  int sum_of_all_array[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}
        };
  int i,j;
    for(i=0;i<5;i++){//this is for row loop
        for(j=0;j<5;j++){//tbis is for coloumn loop
  printf("  %d      ",sum_of_all_array[i][j]);
        }
       printf("\n");//this is space between the row 
       printf("\n"); 
    }
    
}
