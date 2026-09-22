#include <stdio.h>

int main(){
	
	float marks;
	printf("Enter marks out of 500: ");
	scanf("%f",&marks);
	
	if (marks>=400 && marks<= 500)
	printf("Division A");
	
	else if (marks>=300 && marks< 400)
	printf("Division B");
	
	else if (marks>=200 && marks< 300)
	printf("Division C");

	else if (marks>=165 && marks< 200)
	printf("Division D");
	
	else if (marks>=0 && marks< 165)
	printf("Division F");	
	
	else{
		printf("Marks are invalid");
	}
	
	
	
	return 0;
}
