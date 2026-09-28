#include <stdio.h>

int main (){
	
	int num,rev_num,a,b,c;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	rev_num = num%10;
	
	while(num/10>0){
		num = num/10;
		rev_num *= 10;
		rev_num += (num%10);
	}
	
	printf("%d",rev_num);	
	return 0;
}
