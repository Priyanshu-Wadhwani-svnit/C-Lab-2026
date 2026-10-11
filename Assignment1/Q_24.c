#include <stdio.h>
#include <math.h>

int main(){
	
	float x,y;
	int n;
	
	printf("Enter The Value of x(FLOAT): ");
	int k = scanf("%f",&x);
	printf("Enter The Value of n(INTEGER): ");
	int z = scanf("%d",&n);
	
	if (k == 0 || z==0){
		printf("You have not entered the correct values!!");}
	else{	
	
	switch(n){
	case 1:
		printf("The Value of Y is %f",1+x);
		break;
	case 2:
		printf("The value of Y is %f",(1+(x/n)));
		break;
	case 3:
		printf("The value of Y is %f",1+(pow(x,n)));
		break;
	default:
		printf("The value of Y is %f",1+(n*x));
		break;
	}}	
		
	
	return 0;
}
