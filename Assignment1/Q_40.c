#include <stdio.h>

int main(){
	
	int num,sum=0;
	
	while (1){
		printf("Enter a number you want to add to the sum as you enter a negative number the program will print the sum: ");
		scanf("%d",&num);
		if (num>=0){sum += num;}
		else{break;}
	}
	
	printf("%d",sum);
	return 0;
	}
	
