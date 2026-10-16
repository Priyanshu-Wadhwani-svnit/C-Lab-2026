# include <stdio.h>

int max(int n[],int size){
int maxm =n[0],i;
for(i=0;i<size;i++){
	if (n[i]>maxm){
		maxm = n[i];
	}}
	return maxm;
}


int main(){
	int n[200],maxs,size,i;
	printf("Enter the Size: ");
	scanf("%d",&size);
	printf("Enter the Elements: \n");
	for(i=0;i<size;i++){
	
	scanf("%d",&n[i]);}
	
	maxs = max(n,size);
	
	printf("\nThe array is:\n\n");
	for(i=0;i<size;i++){
		printf("%d\t",n[i]);
	}
	
	printf("\n\nThe max element is %d",maxs);
	return 0;
}
