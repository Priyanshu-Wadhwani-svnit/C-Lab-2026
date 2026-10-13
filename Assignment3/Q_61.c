# include <stdio.h>

void check(int a){
	int rev_num,num_copy;
	
	
	num_copy = a;
	
	rev_num = a%10;
	
	while(a/10>0){
		a = a/10;
		rev_num *= 10;
		rev_num += (a%10);
	}
	
	
	if (num_copy == rev_num){printf("It is a palindrome");}
	else{printf("It is not a palindrome");}
}

int main(){
	
int a;
printf("Enter the value you want to check?\n");
scanf("%d",&a);	
	check(a);
	
	return 0;
}
