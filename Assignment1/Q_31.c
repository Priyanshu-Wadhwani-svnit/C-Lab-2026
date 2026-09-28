#include <stdio.h>

int main(){
	int num,sum=0,last;
	
	printf ("Enter a Number: ");
	scanf("%d",&num);
		
	while ((num/10)>0){
		last  = num%10;
		sum += last;
		num = num/10;
	}
	sum += num;
	printf("The Sum of Digits is: %d",sum);
}
