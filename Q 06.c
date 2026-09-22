# include <stdio.h>

int main(){
	
	int a = 9,b=4;
	printf("Values of a and b are: %d,%d\n",a,b);
	
	a=a+b;
	b = a-b;
	a =a-b;
	
	printf("Values of a and b are: %d,%d",a,b);
	
	
	
	return 0;
}
