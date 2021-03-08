#include<stdio.h>

#include<unistd.h>

int main(void){

    int n;

   

        printf("Enter a number: ");

        scanf("%d",&n);

   

        for(int i =0;i<n;i++){

            for(int j= 0;j<n;j++){

               

                printf("# ");

            

               

            }

            sleep(1);

            printf("\n");

        }

    

    for(int m=0;m<n;m++){

            for(int c=0;c<=m;c++){

               

                printf("# ");

            

               

            }

            sleep(1);

            printf("\n");

        }

    return 0;

}
