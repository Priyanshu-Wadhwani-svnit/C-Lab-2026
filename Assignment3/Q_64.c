#include <stdio.h>
int count =0,n;
void fib(int a ,int b){
	if(count!=n)
	{
	printf("%d\t",a);
	count++;
	fib(b,a+b);
	}
	else{return;}}

int main(){
	int a=0,b=1;
	printf("Enter the number of terms needed: ");
	scanf("%d",&n);
	
		fib(a,b);	
	return 0;
}	
