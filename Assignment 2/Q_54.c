# include<stdio.h>

int main(){
  
int A[3][3],i,j,min;

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
  
  printf("\n\nThe transpose of the matrix is :\n");
  for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    printf("%d\t",A[j][i]);
  }
  printf("\n");
  }
  
  return 0;}
