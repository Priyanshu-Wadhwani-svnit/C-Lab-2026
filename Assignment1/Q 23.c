# include <stdio.h>

int main(){
	
	int a,b,c,ans =1;
	
	printf("Enter the number(integer): ");
	scanf("%d",&a);
	
	printf("Enter the Power(integer): ");
	scanf("%d",&b);
	
	for (c=1;c<=b;c++){
		ans *= a;
	}
	printf("%d",ans);
	return 0;
}
