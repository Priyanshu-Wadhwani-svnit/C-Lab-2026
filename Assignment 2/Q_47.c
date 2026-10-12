#include <stdio.h>

int main(){
  int a[10] ,b[10],c[10],i;
  printf("Enter the Elements of the First Array:\n");
  for (i=0;i<10;i++){
    scanf("%d",&a[i]);
    }
    
    printf("Enter the Elements of the Second Array:\n");
  for (i=0;i<10;i++){
    scanf("%d",&b[i]);
    }
    
    for (i=0;i<10;i++){
      c[i] = a[i] + b[i];
      }
    
       printf("The First array is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",a[i]);
    }  
    
    printf("\nThe Second array is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",b[i]);
    }  
      
      
      
  printf("\nThe resultant array is:\n");
  
  for(i=0;i<10;i++){
    printf("%d\t",c[i]);
    }
  
  return 0;
}
