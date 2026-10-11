#include <stdio.h>

int main(){
	
	float cm,m,p,c,e;
	
	printf("Enter marks in Mathematics out of 200: ");
	scanf("%f",&m);
	printf("Enter marks in Physics out of 200: ");
	scanf("%f",&p);
	printf("Enter marks in Chemsitry out of 200: ");
	scanf("%f",&c);
	printf("Enter marks in Entrance examination out of 100: ");
	scanf("%f",&e);
	
	if (p<=200 && p>=0 && c<=200 && c>=0 && m<=200 && m>=0 && e <=100 && e>=0){
	
	printf("\n\nThe cutoff marks are %.2f",((m/2.0)+(p/2.0)+(c/2.0)+e));
}
else {printf("Kindly reverify what you have entered");}	
	return 0;
}
