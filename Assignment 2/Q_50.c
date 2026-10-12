#include <stdio.h> 

int main(){
int i,j,temp,size,count;  
printf("Enter the size of the array: ");
scanf("%d",&size);
int arr[size];

printf("Enter the %d elements\n",size);

  for (i= 0; i<size ;i++){
    scanf("%d",&arr[i]);}  

 for (i=1;i<size;i++) {
 count = 0;
for (j = 0;j< size-i; j++){

 if (arr[j] > arr[j+1]) {
   temp = arr[j+1];
   arr[j+1] = arr[j];
   arr[j] = temp;
   count ++;}}
   
   if (count == 0){
     break;
   }
   
   }
  printf("\n\n");
 for (i = 0;i<size;i++){
  printf("%d\t",arr[i]);}
  
 return 0;}
