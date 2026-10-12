# include<stdio.h>

int main(){
  
int A[3][3],i,j,sum;

printf ("Enter the Element of the matrix\n");
for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    scanf("%d",&A[i][j]);
  }}
    
  printf("\n\nThe matrix is :\n");
  for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    printf("%d\t",A[i][j]);
  }
  printf("\n");
  }
  
 for (i=0;i<3;i++){
  sum=0;
  for(j=0;j<3;j++){
    sum += A[i][j];
    }
   printf("The sum of elements of %d row is %d\n",i+1,sum);
  }
  
  return 0;}
