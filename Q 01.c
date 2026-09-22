#include <stdio.h>

int main (){
	float principal,time,rate ;
	printf("Simple Interest Calculator\nEnter the Principal Amount: ");
	scanf("%f",&principal);
	printf("Enter The time in YEARS: ");
	scanf("%f",&time);
	printf("Enter the rate in percentage: ");
	scanf("%f",&rate);
	
	float interest = principal*rate*time/100;
	printf("\n\n\nThe simple interest of your data is: %f",interest);
	
	return 0;}
