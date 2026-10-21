# include <stdio.h>

int main(){
	
	int a,i,n,max,smax,j,flag=0;
	
	int ar[50];
	printf("Enter the number of elements(<50)");
	scanf("%d",&n);
	
	printf("Enter the Elements: \n");
	for (i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	max = (ar[0]>=ar[1])? ar[0]: ar[1];
	
	for (i = 0;i<n;i++){
		if (ar[i]!=max){
			if (ar[i]> max){
			smax = max;
			max = ar[i];
				
		}
		else if (ar[i]>smax && ar[i]!= max ){
			smax = ar[i];
		}
			flag =1;
			break;
		}
	}
	
	if (flag ==1)	{
	for(j=i+1;j<n;j++){
		if (ar[j]> max){
			smax = max;
			max = ar[j];
		}
		else if (ar[j]>smax && ar[j]!= max ){
			smax = ar[j];
		}
	}

printf("%d is maximum and %d is second maximum",max,smax);}
	else {printf("No second max element found");}

	return 0;
}
