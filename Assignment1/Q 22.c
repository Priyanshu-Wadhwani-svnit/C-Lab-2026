#include<stdio.h>

int main(){
	
	int number,i,factorial;
	
	printf("Enter the number whose factorial is needed: ");
	scanf("%d",&number);
	i =1;
	factorial=1;
	
	do {factorial =factorial*i;
	i += 1;
	} while(i<=number);
	
	printf("%d",factorial);
	
	
	return 0;
}
