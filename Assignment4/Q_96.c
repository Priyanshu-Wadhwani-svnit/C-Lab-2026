#include <stdio.h> 
#include <stdlib.h>
int main(){
int p,i,j,*temp=&p,size,count;  
printf("How many numbers you want to enter: ");
scanf("%d",&size);
int* ptr = (int*) malloc(size*sizeof(int));

printf("Enter the %d elements\n",size);

  for (i= 0; i<size ;i++){
    scanf("%d",ptr+i);}  
    
    
    
    
 for (i=1;i<size;i++) {
 count = 0;
for (j = 0;j< size-i; j++){
 if (*(ptr+j) > *(ptr+j+1)) {
 
 	*temp = *(ptr+j);
	 *(ptr+j) = *(ptr+j+1);
	 *(ptr+j+1) = *temp; 	

   count ++;}}
   
   if (count == 0){
     break;
   }
   }
  
 for (i = 0;i<size;i++){
  printf("%d\t",*(ptr+i));}
  free(ptr);
 return 0;}
