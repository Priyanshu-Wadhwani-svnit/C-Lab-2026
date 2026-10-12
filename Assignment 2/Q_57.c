# include<stdio.h>

int main(){
  
int A[3][3],B[3][3],C[3][3],i,j,k;

printf ("Enter the Element of the First matrix\n");
for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    scanf("%d",&A[i][j]);
  }}
  
  printf ("Enter the Element of the Second matrix\n");
for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    scanf("%d",&B[i][j]);
  }}
  
  
    
  printf("\n\nThe First matrix is :\n");
  for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    printf("%d\t",A[i][j]);
  }
  printf("\n");
  }
    
  printf("\n\nThe Second matrix is :\n");
  for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    printf("%d\t",B[i][j]);
  }
  printf("\n");
  }
  
 for (i=0;i<3;i++){
  for(j=0;j<3;j++){
     C[i][j] = 0;
     for (k=0;k<3;k++){
       C[i][j] += (A[i][k]*B[k][j]);
       }
  }
  }
  printf("\n\nThe Resultant  matrix is :\n");
  for (i=0;i<3;i++){
  for (j= 0;j<3;j++){
    printf("%d\t",C[i][j]);
  }
  printf("\n");}
  return 0;}
