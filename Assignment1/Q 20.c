#include <stdio.h>

int main(){
	
	int op;
	float a,b;
	
	printf("Enter the First number: ");
	scanf("%f",&a);
	
	printf("Enter the Second number: ");
	scanf("%f",&b);
	
	printf("Select the operation you want to perform: \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division    ");
	scanf("%d",&op);
	
	switch (op){
		
		case 1:
			printf("The sum of %f and %f is %f",a,b,a+b);
			break;
		
		case 2:
			printf("On subtracting %f from %f we get %f",b,a,a-b);
			break;
			
		case 3: 
			printf("On multiplying %f with %f we get %f",a,b,a*b);
			break;
			
		case 4:
			if (b==0){printf("Zero Division Error");}
			else{
				printf("On dividig %.2f by %.2f we get %.2f",a,b,a/b);}
			break;
		default:
			printf("Enter a valid Operator");
			
	}
	
	return 0;
}
