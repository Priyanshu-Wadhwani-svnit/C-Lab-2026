# include<stdio.h>

int main(){
  
int A[3][3],i,j,min;

printf ("Enter the Element of the matrix\n");
for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    scanf("%d",&A[i][j]);
  }}
  int max=min= A[0][0];
for (i=0;i<3;i++) {
  for (j=0;j<3;j++){
      if (A[i][j] > max) {max = A[i][j];}
      if (A[i][j]<min){min = A[i][j];}
    }
  }
  
  
  printf("\n\nThe matrix is :\n");
  for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    printf("%d\t",A[i][j]);
  }
  printf("\n");
  }
  
  
  
  printf("\n\nThe max element is %d and the min element is %d",max,min);
  
  return 0;}
