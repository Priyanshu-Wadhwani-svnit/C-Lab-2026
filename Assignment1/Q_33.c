#include <stdio.h>

int main(){
  
  int max,min,a,i,n;
 
 printf("Enter how many numbers are there: ");
 scanf("%d",&n);
 
 printf("Enter the Numbers: \n");
 scanf("%d",&a);
  
  min = max = a;
  
  for (i=0;i<n-1;i++){
    
    scanf("%d",&a);
    if (a>max){max = a;}
    if (a<min){min =a;} }
  
  printf("%d is max and %d is min",max,min);
  return 0;
}
