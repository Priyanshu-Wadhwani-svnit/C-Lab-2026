#include <stdio.h>

int main (){
	
	int num,rev_num,num_copy;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	num_copy = num;
	
	rev_num = num%10;
	
	while(num/10>0){
		num = num/10;
		rev_num *= 10;
		rev_num += (num%10);
	}
	
	
	if (num_copy == rev_num){printf("It is a palindrome");}
	else{printf("It is not a palindrome");}
	return 0;
}
