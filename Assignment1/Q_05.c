# include <stdio.h>

int main(){
	
	int a,b,c;
	a=10;
	b = 5;
	printf("The value of a and b is %d and %d respectively\n",a,b);
	
	c =a;
	a=b;
	b=c;
	
	printf("The value of a and b is %d and %d respectively\n",a,b);
	
	return 0;
}
