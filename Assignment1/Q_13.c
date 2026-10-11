#include <stdio.h>

int main(){
	int number;
	
	printf("Enter the integer to be checked: ");
	int z = scanf("%d",&number);
	
	if (z ==0){printf("Enter a valid Integer");	}
	else{
		if (number%2==0){printf("The Number is EVEN");}
		else{printf("The Number is ODD");}
	}
	
	return 0;
}
