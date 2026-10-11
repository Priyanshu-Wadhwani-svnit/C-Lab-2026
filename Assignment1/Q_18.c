# include <stdio.h>

int main(){
	
	int a,b,c,max;
	
	printf("Enter three integers with space in between: ");
	scanf("%d %d %d",&a,&b,&c);

	max = (a>b)? a : b;
	max = (max>c)? max: c;
	printf ("%d is the largest number",max);


	return 0;
}
