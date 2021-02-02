#include<stdio.h>

int find_string_length(char str[]){

    int i,length =0;

    for(i=0;str[i]!='\0';i++){

        length++;

    }

    return length;

}

int main(){

    char country[100];

    int length;

    while(1==scanf("%s",country)){ //jotokkn porjontw ekti country naam scanf() diye input neyoaa hosse,function thi  1 return korse.r looper vitorer condition true hosse (1==1),tai looper kaaj solthe takbhe

       length = find_string_length(country);

        printf("The result is:%d\n",length);

    }

    return 0;

}

//using while loop in function

#include<stdio.h>

int find_string_length(char str[]){

    int i;

    i =0;

    while(str[i]!='\0'){

        i++;

    }

    return i;

}

int main(){

    char country[100];

    int length;

    while(1==scanf("%s",country)){ //jotokkn porjontw ekti country naam scanf() diye input neyoaa hosse,function thi  1 return korse.r looper vitorer condition true hosse (1==1),tai looper kaaj solthe takbhe

       length = find_string_length(country);

        printf("The result is:%d\n",length);

    }

    return 0;

}
