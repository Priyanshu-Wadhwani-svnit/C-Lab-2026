#include <stdio.h>

int main(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
   int i,j,temp;
  printf("Array Before: \n");
  for (i= 0;i<10;i++){
  printf("%d\t",a[i]);
  }
 
  for (i=0,j=9;i<j;j--,i++){
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    }
 printf("\nArray After: \n");
for (i= 0;i<10;i++){
  printf("%d\t",a[i]);
  }
  return 0;
}
