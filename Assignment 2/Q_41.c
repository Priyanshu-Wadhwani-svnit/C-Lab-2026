#include <stdio.h> 

int main(){
  
	int x,y,z,q,r;
	
	for(x=1;x<5;x++){
		z = 4-x;
		for(y =z;y>0;y--){printf(" ");}
		for(q=1;q<=x;q++){printf("%d",q);}
		r = x-1;
		while (r>0){
			printf("%d",r);
			r -=1;
		}
		printf("\n");
		
	}	
  
  
  return 0;
  }
