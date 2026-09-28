#include <stdio.h>

int main(){
	int num,sum=0,last,count =1;
	
	printf ("Enter a Number: ");
	scanf("%d",&num);
do {
	if (count != 1){num = sum;sum = 0;}
	while ((num/10)>0){
		last  = num%10;
		sum += last;
		num = num/10;
	}
	sum += num;
	count ++;}
	while (sum > 9);
	printf("The Sum of Digits is: %d",sum);
}
