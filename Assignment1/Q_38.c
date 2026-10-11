# include <stdio.h>
#include <math.h>

int main(){
	int i,j,n;
	float sum =0;
	
	
	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	
	for (i=1;i<=n;i++){
	if (i!=1) printf(" + ");
	j =1;
	float factorial=1;
	
	do {factorial =factorial*j;
	j += 1;
	} while(j<=i);
	
	float value = i/factorial;
	sum += value;
	printf("%d / %d!",i,i);
}

printf(" is %.2f",sum);
	return 0;
}
