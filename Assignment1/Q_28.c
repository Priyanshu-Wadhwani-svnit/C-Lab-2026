#include <stdio.h>
#include <math.h>

int main(){
  int n,count=0,sum=0,i;
  
  printf("Enter the Number N: ");
  scanf("%d",&n);
 int m = n; 
  while (n>0){
    n = n/10;
    count ++; }

  n = m;
  while(n>0){
    i = n%10;
    i = pow(i,count);
    sum += i;
    n = n/10;
  }
  
 if (sum == m){printf("Armstrong Number");}
 else{printf("Not Armstrong Number ");}
  return 0;
}
