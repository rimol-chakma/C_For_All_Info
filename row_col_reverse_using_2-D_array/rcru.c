#include<stdio.h>

#include<string.h>

int main(){

    int ara1[5][5]={

        {1,2,3,4,5},

        {6,7,8,9,10},

        {11,12,13,14,15},

        {16,17,18,19,20},

        {21,22,23,24,25}

    };

    int ara2[5][5];

    int r,c;

    printf("Content of first array(ara1): \n");

    for(r = 0;r<5;r++){

        for(c=0;c<5;c++){

            printf(" %d ",ara1[r][c]);

           

        }

        printf("\n");

        printf("\n");

      

    }

    

  printf("\n");//space between the firs arra1 and 2nd arra2

  //now start copy

    for(r=0;r<5;r++){

        for(c=0;c<5;c++){

            ara2[c][r]=ara1[r][c];

          

        }

    }

  printf("Content of second array (ara2):\n");

    for(r = 0;r<5;r++){

        for(c=0;c<5;c++){

            printf(" %d    ",ara2[r][c]);

            

        }

      printf("\n");

        printf("\n");

    }

  return 0;

}
