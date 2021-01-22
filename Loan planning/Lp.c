//debt/loan plan 
#include<stdio.h>

int main(){
double loan_amount,interest_rate,number_of_years,total_amount,monthly_amount;
    printf("Enter your loan amount: ");
    scanf("%lf",&loan_amount);
    printf("Enter your interest rate: ");
    scanf("%lf",&interest_rate);
    printf("Enter your number of years: ");
    scanf("%lf",&number_of_years);
    printf("Enter your total amount: ");
    scanf("%lf",&total_amount);
    printf("Enter your monthly amount: ");
    scanf("%lf",&monthly_amount);
    total_amount = loan_amount + loan_amount*interest_rate/100.00;
    monthly_amount = total_amount/(12*number_of_years);
    printf("Total amount:%0.2lf\n",total_amount);
    printf("The monthly amount:%0.2lf\n",monthly_amount);
    return 0;
}
