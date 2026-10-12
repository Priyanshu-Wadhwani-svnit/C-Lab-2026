#include <stdio.h>

int main(){
  
  int max,smax,a,i,n;
 
 printf("Enter how many numbers are there: ");
 scanf("%d",&n);
 
 printf("Enter the Numbers: \n");
 scanf("%d",&a);
  
  max = a;
  
  scanf("%d",&a);
  if (a> max ){smax = max; max =a ;}
  else{smax = a;}
  
  for (i=0;i<n-2;i++){
    
    scanf("%d",&a);
    if (a> smax){smax = a;}
    if (a> max ){smax = max; max =a ;;}
  }
  
  printf("%d is max and %d is second max ",max,smax);
  return 0;
}
