#include <stdio.h>

int main(){
	float a,b,c,d,e;
	printf("Enter Marks in First Subject out of 100: ");
	scanf("%f",&a);
	printf("Enter Marks in Second Subject out of 100: ");
	scanf("%f",&b);
	printf("Enter Marks in Third Subject out of 100: ");
	scanf("%f",&c);
	printf("Enter Marks in Fourth Subject out of 100: ");
	scanf("%f",&d);
	printf("Enter Marks in Fifth Subject out of 100: ");
	scanf("%f",&e);	
	float total = a+b+c+d+e;
	printf("\n\n\nThe total of your marks out of 500 is:%.2f\nYour Percentage is %.2f",total,total/5);
	return 0;
	
}
