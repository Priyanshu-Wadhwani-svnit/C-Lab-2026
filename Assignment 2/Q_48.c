#include <stdio.h>

int main(){
  int a[10] ,b[10],i,temp;
  printf("Enter the Elements of the First Array:\n");
  for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    
    printf("Enter the Elements of the Second Array:\n");
  for (i=0;i<10;i++){
    scanf("%d",&b[i]);
    }
    

    
       printf("The First array is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",a[i]);
    }  
    
    printf("\nThe Second array is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",b[i]);
    }  
      
          for (i=0;i<10;i++){
      temp = a[i];
      a[i] = b[i];
      b[i] = temp;
      }
      
  printf("\nThe first array after swap is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",a[i]);
    }
    
    printf("\nThe Second array after swap is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",b[i]);
    }
  
  return 0;
}
