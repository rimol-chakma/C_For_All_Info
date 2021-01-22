//Method 1
#include<stdio.h>
int main(){
    int a1,a2,b1,b2,c1,c2,x,y;
    a1 = 4; a2 = 5;
    b1 = 5; b2 = 6; 
    c1 = 14; c2 = 17;
    x =(b2*c1 - b1*c2)/(a1*b2-a2*b1);
    y = (a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf("The value of x is %d\n",x);
    printf("And the value of y is %d\n",y);
    return 0;
    
}

//Method 2
#include<stdio.h>
int main(){
    double a1,a2,b1,b2,c1,c2,x,y;
    printf("a1 =  ");
    scanf("%lf",&a1);
    printf("a2 =  ");
    scanf("%lf",&a2);
     printf("b1=  ");
    scanf("%lf",&b1);
     printf("b2 =  ");
    scanf("%lf",&b2);
     printf("c1 =  ");
    scanf("%lf",&c1);
     printf("c2 =  ");
    scanf("%lf",&c2);
    x =(b2*c1 - b1*c2)/(a1*b2-a2*b1);
    y = (a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf("x = %0.2lf\n",x);
    printf("y = %0.2lf\n",y);
    return 0;
    
}
//Method 3
#include<stdio.h>
int main(){
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("a1 =  ");
    scanf("%lf",&a1);
    printf("a2 =  ");
    scanf("%lf",&a2);
     printf("b1=  ");
    scanf("%lf",&b1);
     printf("b2 =  ");
    scanf("%lf",&b2);
     printf("c1 =  ");
    scanf("%lf",&c1);
     printf("c2 =  ");
    scanf("%lf",&c2);
    if((int) d==0)//iteger type casting,where input be the double type variable.
    {
        printf("The value of x & y can't be determined.\n");
        }
    else{
    x =(b2*c1 - b1*c2)/(a1*b2-a2*b1);
    y = (a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf("x = %0.2lf\n",x);
    printf("y = %0.2lf\n",y);
        }
    return 0;
    
}
