#include <stdio.h>

int main(){
	
	int N,i,sum_odd=0,sum_even=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	for (i=1;i<=N;i++){
		if (i%2==0){
			sum_even += i;
		}
		else{
			sum_odd += i;
		}
	}
	
	printf("The sum of all odd numbers between 1 and %d is: %d\n",N,sum_odd);
	printf("The sum of all odd numbers between 1 and %d is: %d",N,sum_even);
	
	return 0;
}
