#include <stdio.h>

int main(){
  
  int a[10]= {9,6,7,8,9,9,1,2,0};
  int target, i,count=0;
  printf("Enter the value whose frequency is required: ");
  scanf("%d",&target);
  for (i=0;i<10;i++){
    if (target == a[i]){
      count ++;
      }
    }
 
  printf("%d",count);
  return 0;
}
