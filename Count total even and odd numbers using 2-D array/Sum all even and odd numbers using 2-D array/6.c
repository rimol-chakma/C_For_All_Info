//16 multiplication_table_using_2-D array
#include <stdio.h>

int main(){

    int row,col,even,odd,r,sum;

     int mul_table[12/*It is the size of row which we want to print out*/][3];

   for(row=4;row<10;row++){

      for(col=0;col<10;col++){

        mul_table[row][col]=(row+1)*(col+1);

printf("%d×%d=%d\n",row+1,col+1,mul_table[row][col]);
      }
    break;
     }
  
  for(row=4;row<10;row++){

        even =0;

        odd = 0 ;
        sum = 0;
      for(col=0;col<10;col++){

           r = (row+1) * (col+1);

        if(r%2==0){

               even++;

             }

         else{

            odd++;

               }
       sum = sum + r;
          }
     printf("The total even numbers are %d\n",even);

     printf("The total odd numbers are %d\n",odd);
        printf("The sum of even and odd numbers are %d\n",sum);
        break;
     }

    return 0;

}
