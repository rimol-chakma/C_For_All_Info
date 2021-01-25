//How many students got same marks?
#include<stdio.h>

int main(){
int total_marks[]={86,78,94,86,94,87,84,94,92,87};
    int i,count,marks;
    for(marks=80;marks<=100;marks++){
        count = 0;
        for(i = 0; i < 10; i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
        printf("Marks:%d Count: %d\n",marks,count);
    }
    return 0;
}
//Another method 
#include<stdio.h>

int main(){

int total_marks[]={86,78,94,86,94,87,84,94,92,87};

    int i;

  int marks_count[101];

    for(i = 0;i<101;i++){

        marks_count[i] = 0;

    }

    for(i = 0; i< 10;i++){

        marks_count[total_marks[i]]++;

    }

    for(i = 80; i<=100;i++){

        printf("Marks:%d Count: %d\n",i,marks_count[i]);

    }

    return 0;

  }
