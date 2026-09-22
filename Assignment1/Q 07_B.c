#include <stdio.h>
#include <math.h>

int main(){
	
	double a,b,c;
	
	printf("Enter the length of first side: ");
	scanf("%lf",&a);
	printf("Enter the length of second side: ");
	scanf("%lf",&b);
	printf("Enter the length of third side: ");
	scanf("%lf",&c);
	
	double total = a+b+c;
	double s = total/2;
	double A = s-a;
	double B = s-b;
	double C = s-c;	
	
	double area = s*A*B*C;
	double area_final = pow(area,0.5);
	
	printf("The area is %.2f",area_final);
	
	return 0;
}
