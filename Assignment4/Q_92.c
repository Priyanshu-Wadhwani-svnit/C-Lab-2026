#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i;
	printf("How many numbers do you want to enter: ");
	scanf("%d",&n);
	
	int *ptr;
	ptr = (int*) malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	
	int max = *ptr;
	
	for (i=1;i<n;i++){
		if ((*(ptr+i))>max){
			max = *(ptr+i);
		}
	}
	
	printf("The max element is %d",max);
	
	return 0;
}
