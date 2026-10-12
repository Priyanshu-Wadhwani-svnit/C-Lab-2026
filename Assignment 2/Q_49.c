#include <stdio.h> 

int main(){
int size,i,j,temp;  
printf("Enter the size of the array: ");
scanf("%d",&size);
int arr[size];

printf("Enter the %d elements\n",size);

  for (i= 0; i<size ;i++){
    scanf("%d",&arr[i]);}  


for (j=0;j<size;j++){
int min = arr[j];
int min_index = j;
for (i=j; i<size ;i++){
 
 if (arr[i] < min){
   
   min = arr[i];
   min_index = i;
   }
 
 }
 if (min_index != j){
temp = arr [min_index] ;
arr[min_index] = arr[j];
arr[j] = temp;
 }
 
 }
printf("\n\n\n\n") ;
 
 for (i = 0;i<size;i++){
  printf("%d\t",arr[i]);}
  
  
  
 return 0;
}
