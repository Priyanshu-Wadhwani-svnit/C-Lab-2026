#include<stdio.h>

int main(){
	int n,a,b,c;
	
	printf("Enter the number of terms of fibonacci series you want: ");
	scanf("%d",&n);
	
	a =0;
	b=1;
	if (n==1){printf("%d",a);}
	else if(n==2){printf("%d\t%d",a,b);}
	else{
		int i =2;
		printf("%d\t",a);
		while(i<=n){
			c=a+b;
			b=a;
			a=c;
			printf("%d\t",a);
			i+=1;
		}
	}	
	return 0;
}
