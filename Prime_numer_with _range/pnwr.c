//first method

#include <stdio.h>

#include<math.h>

int main(){

  int i, Number,count; 

    double root;

  printf(" Prime Number from 1 to 1000000 are: \n"); 

  for(Number = 1; Number <=1000000; Number++){

    count = 0;

   root = sqrt(Number);

    for (i =2; i <root; i++){

  	if(Number%i == 0){     	  count++;

  	  break;

	       }

    }

    if(count == 0 && Number != 1){

	printf(" %d\n", Number);

    }  

  }

  return 0;

}

//2nd method

#include <stdio.h>

int main(){

  int i, Number,count; 

   

  printf(" Prime Number from 1 to 40 are: \n"); 

  for(Number = 1; Number <=40; Number++){

    count = 0;

   

    for (i =2; i <= Number-1; i++){

  	if(Number%i == 0){

     	  count++;

  	  break;

	       }

    }

    if(count == 0 && Number != 1){

	printf(" %d\n", Number);

    }  

  }

  return 0;

}

//3rd method

#include <stdio.h>

int main(){

  int i, Number,count; 

  printf(" Prime Number from 1 to 50 are: \n"); 

  for(Number = 1; Number <=50; Number++){

    count = 0;

   

    for (i =2; i <=Number/2; i++){

  	if(Number%i == 0){

     	  count++;

  	  break;

	       }

    }

    if(count == 0 && Number != 1){

	printf(" %d\n", Number);

    }  

  }

  return 0;

}

