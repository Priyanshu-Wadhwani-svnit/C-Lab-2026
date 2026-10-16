# include <stdio.h>

int factorial(int n){
int i,fact=1 ;
for(i=1;i<=n;i++){
	fact *= i;}
	return fact;
}


int main(){
	int n,res,r;
	printf("Enter the Number (n): ");
	scanf("%d",&n);
	printf("Enter the Number (r): ");
	scanf("%d",&r);
	if (n>=r){
	
	res = factorial(n)/(factorial(r)*factorial(n-r));
	printf("%d",res);}
	else{
		printf("The values are inappropriate");
	}
	return 0;
}
