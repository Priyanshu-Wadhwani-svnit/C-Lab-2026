#include<stdio.h>

int main(){
	float feh;
	printf("Enter Value of temperature in Fehrenite: ");
	scanf("%f",&feh);
	float cel =( (feh - 32)*(5/9.0));
	printf("In Celsius the value is: %f",cel);
	
	
	return 0;
}
