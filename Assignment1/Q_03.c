#include <stdio.h>

int main(){
	float a,b,c,d,e;
	
	printf("Enter Your Basic salary: ");
	scanf("%f",&a);
	printf("Enter Your HRA: ");
	scanf("%f",&b);
	printf("Enter Your Special Allowance: ");
	scanf("%f",&c);	
	printf("Enter Your Bonuses: ");
	scanf("%f",&d);
	printf("Enter Your Overtime pays: ");
	scanf("%f",&e);
	
	printf("Your Gross Salary is: %f",a+b+c+d+e);		
	
	return 0;
}
