#include <stdio.h>

int main(){
	
	char op;
	float a,b;
	
	printf("Enter the First number: ");
	scanf("%f",&a);
	
	printf("Enter the Second number: ");
	scanf("%f",&b);
	
	printf("Select the operation you want to perform: \n+ for addition\n- for subtraction\n* for multiplication\n/ for division    ");
	scanf( " %c",&op);
	
	switch (op){
		
		case '+':
			printf("The sum of %f and %f is %f",a,b,a+b);
			break;
		
		case '-':
			printf("On subtracting %f from %f we get %f",b,a,a-b);
			break;
			
		case '*': 
			printf("On multiplying %f with %f we get %f",a,b,a*b);
			break;
			
		case '/':
			if (b==0){printf("Zero Division Error");}
			else{
				printf("On dividig %f by %f we get %f",a,b,a/b);}
			break;
		default:
			printf("Enter a valid Operator");
			
	}
	
	return 0;
}
