#include <stdio.h>

int main(){
	int sum,i,count_odd=0,count_even=0;
	int ar[10];
	for(i=0;i<10;i++){
	printf("Enter the %dth element(integer) of the array:",i+1);
	scanf("%d",&ar[i]);}
	
	for (i=0;i<10;i++){
		if ((ar[i] %2) ==0){
		count_even +=1;}
		else{
			count_odd+=1;
		}
	}
	
	printf("The number of odd elements is %d and no of even elements is %d",count_odd,count_even);
	return 0;
}
