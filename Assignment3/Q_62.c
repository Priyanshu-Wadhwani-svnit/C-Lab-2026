# include <stdio.h>

void check(int n){
	int count=0,sum=0,i;
  
  
 int m = n; 
  while (n>0){
    n = n/10;
    count ++; }

  n = m;
  while(n>0){
    i = n%10;
    i = pow(i,count);
    sum += i;
    n = n/10;
  }
  
 if (sum == m){printf("Armstrong Number");}
 else{printf("Not Armstrong Number ");}
  
}

int main(){
	
int a;
printf("Enter the value you want to check?\n");
scanf("%d",&a);	
	check(a);
	
	return 0;
}
