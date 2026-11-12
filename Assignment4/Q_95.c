#include<stdio.h>

struct employee{
	int Number;
	char Name[100];
	float Basic_pay;
};

typedef struct employee emp;

int main(){
	emp* ptr;
	emp EMPLOY[50];
	int n,i;
	
	
	printf("Enter how many employees data you want to enter: ");
	scanf("%d",&n);
	
	ptr = EMPLOY;
	
	for (i=0;i<n;i++){
		printf("Enter employee %d details: \n",i+1);
		printf("Enter the Employee Number: ");
		scanf("%d",&(ptr+i)->Number);
		getchar();
		printf("Enter the Employee Name: ");
		gets((ptr+i)->Name);
		printf("Enter the Basic Pay: ");
		scanf("%f",&(ptr+i)->Basic_pay);
	}
	printf("\n\nDisplaying the details of employees\n\n");
	for (i=0;i<n;i++){
		printf("%d\t%s\t%.2f\n",(ptr+i)->Number,(ptr+i)->Name,(ptr+i)->Basic_pay);
	}
	
	return 0;
}
