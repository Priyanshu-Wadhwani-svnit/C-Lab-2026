# include <stdio.h>

void check(int a){
	if (a%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
}

int main(){
	
int a;
printf("Enter the value you want to check?\n");
scanf("%d",&a);	
	check(a);
	
	return 0;
}
