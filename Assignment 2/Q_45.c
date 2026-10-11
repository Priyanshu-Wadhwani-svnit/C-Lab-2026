#include <stdio.h>

int main(){
	int i,count_pos=0,count_neg=0,count_zero=0;
	int ar[10];
	for(i=0;i<10;i++){
	printf("Enter the %dth element(integer) of the array:",i+1);
	scanf("%d",&ar[i]);}
	
	for (i=0;i<10;i++){
		if (ar[i]>0){
		count_pos++;}
		else if(ar[i]<0){
			count_neg+=1;
		}
		else{
			count_zero+=1;
		}
	}
	
	printf("The number of positive elements is %d no of negative elements is %d and number of zero elements is %d ",count_pos,count_neg,count_zero);
	return 0;
}
