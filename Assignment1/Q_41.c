# include <stdio.h>

int main(){

int n,i;
printf("Enter the number whose factors are required: ");
scanf("%d",&n);
printf("\n\nThe Factors are:\n");

for (i=1;i<=n;i++){
	if (n % i == 0){
		printf("%d\n",i);
	}
}	
	return 0;
}
