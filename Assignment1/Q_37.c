#include <stdio.h>

int main(){

int n,i=2;	
printf("Enter the last even number till which you need the pattern to be: ");
scanf("%d",&n);

while(n>=i){
	printf("%d ",i);
	i+=2;}
	return 0;
}
