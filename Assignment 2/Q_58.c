#include <stdio.h>

int main(){
  
  int a[10]= {5,6,7,8,9,4,1,2,0};
  int target, i,flag = 0;
  printf("Enter the Target value: ");
  scanf("%d",&target);
  for (i=0;i<10;i++){
    if (target == a[i]){printf("The index value is %d",i);flag = 1;break;}
    }
  if (flag==0) {printf("not found");}
  
  return 0;
}
