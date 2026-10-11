#include <stdio.h>

int main(){
	int i,num,count=0;
	
	printf("Enter the Number you want to check: ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if ((num % i) ==0){
			count = 1;
			break;
		}
	}
	if (num ==2){count =0;}
	if (count == 0){printf("The Number is PRIME");}
	else{printf("The number is NOT PRIME");}
	}
