#include <string.h>

int main(){
	int n;
	int* ptr;
	ptr = &n;
	
	printf("Enter the Number: ");
	scanf("%d",ptr);
	
	printf("square of %d is %d",*ptr,(*ptr)*(*ptr));
	printf("\ncube of %d is %d",*ptr,(*ptr)*(*ptr)*(*ptr));

	
	return 0;
}
