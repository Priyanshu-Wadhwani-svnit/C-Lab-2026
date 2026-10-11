#include <stdio.h>

int main(){
	
	int number,p;
	
	printf("Enter the integer whose table you want: ");
	int z = scanf("%d",&number);
	
	if (z==0){
		printf("Enter a valid integer!!");
	}
	
	else {
		
	for (p =1;p<=10;p++){
		printf("%d * %d is %d\n",number,p,number*p);
	}}
	
	
	return 0;
}
