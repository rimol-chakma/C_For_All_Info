//method 1
//Binary to decimal convertion

#include<stdio.h>

#include<string.h>

#include<math.h>

int main(){

    char binary[65];

    int len,decimal,power,i;

    printf("Enter the binary number: ");

    scanf("%s",binary);

    decimal = 0;

    len = strlen(binary);

    power = len -1;

    for(i=0;i<len;i++){

  decimal = decimal + (binary[i]-'0')* pow(2,power);

        power--;

    }
  printf("Decimal value is %d\n",decimal);

    return 0;

}
//method 2
#include<stdio.h>

#include<string.h>

#include<math.h>

int main(){
  
  char Binary_number[]="101010";

    int indx;

    int decimal;

    decimal =0;

    int len = strlen(Binary_number);

    int position = 5;

   for(indx= 0;indx<len;indx++){

        decimal = decimal + (Binary_number[indx]-'0'
                             /* here the value of Binary_number[indx] is 0 or 1, '0'means 48 in computer and '1' means 49 in computer.

  therefore

   to denote the value of 0 and 1 in computer as 0 and 1 it will be like 

        '0'-'0' = 48-48 = 0

        '1'-'0' = 49 - 48 = 1

         */

    )*pow(2,position);

        position--;

    }

   

    printf("Decimal value is %d\n",decimal);

    return 0;

}
  
  
  
  
  
  
  
