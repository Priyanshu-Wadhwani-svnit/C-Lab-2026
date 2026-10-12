#include <stdio.h>

int main(){
	int sum=0,i;
	int ar[10];
	for(i=0;i<10;i++){
	printf("Enter the %dth element(integer) of the array:",i+1);
	scanf("%d",&ar[i]);}
	
	for (i=0;i<10;i++){
		sum += ar[i];
		
	}
	
	printf("sum of all elements is %d",sum);
	return 0;
}
