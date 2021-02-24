//multiplication_table_using_2-D array

#include<stdio.h>

int main(){

    /* here main row being 100 for each number after ending and column being three for each number after ending.

    */

    int mul_table[10][10];

    int row,col;

    for(row=1;row<=10;row++){

        for(col=1;col<=10;col++){

            /* this will show the 3rd main column in the right side */mul_table[row][col]=row*col/*it prints the first and 2nd main column in left side*/;

        }

    }

    for(row=1;row<=10;row++){

        for(col=1;col<=10;col++){

        printf("%d × %d = %d\n",row,col,mul_table[row][col]);

    }

   printf("\n");//This is space distance after finishing the 3rd for loop

   printf("\n");

   }

}
