#include<stdio.h>
double find_area_of_circle(double r){
    double w,pi;
    pi = 3.1416;
    w = pi*r*r;
    return w;
}
int main(){
    double p,result;
    printf("Please enter radius: ");
    scanf("%lf",&p);
    result=find_area_of_circle(p);
    printf("The area of circle is %0.2lf",result);
    return 0;
  }
