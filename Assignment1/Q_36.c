#include <stdio.h>

int main(){

int n,i=1;	
printf("Enter the last odd number till which you need the pattern to be: ");
scanf("%d",&n);

while(n>=i){
	printf("%d ",i);
	i+=2;}
	return 0;
}
