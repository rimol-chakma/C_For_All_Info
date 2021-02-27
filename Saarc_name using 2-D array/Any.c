//method 1
#include<stdio.h>

int main(){

    char saarc_name[9][100]={"Bangladesh","India","Pakistan","Nepal","Sri Lanka","Butan","Maldives"};

    int row;

    for(row=0;row<7;row++){

       printf("%s\n",saarc_name[row]);

    }

    return 0;

}



//method 2

#include<stdio.h>

#include<string.h>

int main(){

    char saarc[7][100]={"Bangladesh","India","Pakistan","Sri Lanka","Nepal","Bhutan","Maldives"};

    int row,col,name_length;

    for(row=0;row<7;row++){

        name_length = strlen(saarc[row]);

     for(col=0;col<name_length;col++){

            printf("%c",saarc[row][col]);

        }

        printf("\n");

    }

    return 0;

}

//method 3

#include<stdio.h>

#include<string.h>

int main(){

    char saarc[7][100]={"Bangladesh","India","Pakistan","Sri Lanka","Nepal","Bhutan","Maldives"};

    int row,col,name_length;

    for(row=0;row<7;row++){

        name_length = strlen(saarc[row]);

     for(col=0;col<name_length;col++){

            printf("(%d,%d)= %c\n",row,col,saarc[row][col]);

        }

        printf("\n");

    }

    return 0;

}
