#include<stdio.h>

#include<string.h>

int main(){

    char string_name[8][100]={"Bangladesh","India","Pakistan","Nepal","Sri Lanka","Bhutan","Maldives","Philipines"};

   int row,col,string_length; 

   for(row= 0;row<8;row++){

  string_length = strlen(string_name[row]);

     for(col=0;col<string_length;col++){

            printf("(%d,%d) = %c\n",row,col,string_name[row][col]);

            printf("\n");

           

        }

        printf("\n");

        

    }

    return 0;

}
