//print_the_sum_of_all_value_of_2-D array 
#include<stdio.h>
int main(){
  int sum_of_all_array[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}
        };
  int i,j,sum;
    for(i=0;i<5;i++){
        sum = 0;
        for(j=0;j<5;j++){
     sum = sum + sum_of_all_array[i][j];
        }
 printf("The sum of row %d : %d\n",i+1,sum);
      
    }
    printf("\n");
    
    int l,m,sum1;
    for(l=0;l<5;l++){
        sum1 = 0;
        for(m=0;m<5;m++){
     sum1 = sum1 + sum_of_all_array[m][l];
        }
 printf("The sum of column %d : %d\n",l+1,sum1);
    
    }
    
    return 0;
}
