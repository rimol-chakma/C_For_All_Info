#include <stdio.h>

int main(){

    int row,col,even,odd,r;

     int mul_table[10][3];

   for(row=7;row<=10;row++){

      for(col=1;col<=10;col++){

        mul_table[row][col]=row*col;

printf("%d×%d=%d\n",row,col,mul_table[row][col]);

      }

        break;

     }

  for(row=7;row<=10;row++){

        even =0;

        odd = 0 ;

      for(col=1;col<=10;col++){

           r = row * col;

        if(r%2==0){

               even++;

             }

                else{

                   odd++;

               }

          }

        

     printf("The total even numbers are %d\n",even);

     printf("The total odd numbers are %d\n",odd);

      break;

     }

    return 0;

   

}
