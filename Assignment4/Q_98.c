#include <stdio.h>
#include <stdlib.h>

struct matrix{

int row;
int column;

} A,B;

int main(){
 
	printf("Calculating mat(A)* mat(B)\n\n");
	printf("Enter number of rows of matrix A: ");
	scanf("%d",&A.row);
	printf("Enter number of columns of matrix A: ");
	scanf("%d",&A.column);
	printf("Enter number of rows of matrix B: ");
	scanf("%d",&B.row);
	printf("Enter number of columns of matrix B: ");
	scanf("%d",&B.column);
	
	if (A.column != B.row){
		printf("Invalid");
	}
	else{
		int i,j,k,sum;
		int* ptr_A = (int*)malloc((A.column*A.row)*sizeof(int));
		int* ptr_B = (int*)malloc((B.column*B.row)*sizeof(int));
		int* ptr_C = (int*)malloc((B.column*A.row)*sizeof(int));
		
		//inputting array A
		
		for (i=0;i<A.row;i++){
		for (j=0;j<A.column;j++){
			scanf("%d",(ptr_A+(A.column*i)+(j)));
		}}
		
	
	// inputting array B
		for (i=0;i<B.row;i++){
		for (j=0;j<B.column;j++){
			scanf("%d",(ptr_B+(B.column*i)+(j)));
		}}
	
	printf("\n\nA\n");
	
	for (i=0;i<A.row;i++){
		for (j=0;j<A.column;j++){
			printf("%d\t",*(ptr_A+(A.column*i)+(j)));
		}
		printf("\n");
	}
		printf("\n\nB\n");
		
	for (i=0;i<B.row;i++){
		for (j=0;j<B.column;j++){
			printf("%d\t",*(ptr_B+(B.column*i)+(j)));
		}
		printf("\n");
	}
	
	printf("\n\n");

	for (i=0;i<A.row;i++){
			for(j=0;j<B.column;j++){
				sum = 0;
				for (k=0;k<B.row;k++){
				 	sum+=(*(ptr_A+k+(i*A.column)))*(*(ptr_B+j+(k*B.column)));
				}
				*(ptr_C+(B.column*i)+(j))= sum;
				
				
			}
		}
	for (i=0;i<A.row;i++){
		for (j=0;j<B.column;j++){
			printf("%d\t",*(ptr_C+(B.column*i)+(j)));
		}
		printf("\n");
	}

free(ptr_A);
free(ptr_B);
free(ptr_C);
	
}}
	
