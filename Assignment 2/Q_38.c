#include<stdio.h>
int main()
{
	int i,j,n=5,l;

	for(i=1;i<=n;i++)
	{ 
		for(j=n-1-i;j>=0;j--)
		{
			
			printf(" ");
			
		}
		for(l=1;l<=(2*i)-1;l++)
		{
			printf("*");
		}
	
		printf("\n");
	}
	
	
}
