#include <stdio.h>
int main(){
	
	int a[100],b[100],n,i,count=0;
	printf("Enter number of Integers: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int*p = b;
	for(i=0;i<n;i++){
		*p  = a[i];
		p++;
	}

	for(i=0;i<n;i++){
		printf("%d\t",b[i]);
	}
	return 0;
}
