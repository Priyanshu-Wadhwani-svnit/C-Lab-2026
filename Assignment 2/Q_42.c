#include <stdio.h> 

int main(){
  
	int a,b;
	
for (a=0;a<4;a++){
  for (b=1;b<=4+a;b++){
    if (b>=4-a){printf("*");}
    else{printf(" ");}
    
    }
  printf("\n");
  }
  
 for (a=2;a>=0;a--){
  for (b=1;b<=4+a;b++){
    if (b>=4-a){printf("*");}
    else{printf(" ");}
    
    }
  printf("\n");
  }
  
  
  return 0;
  }
  
