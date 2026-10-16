# include <stdio.h>

int isprime(int n){
int i,count=0 ;
for(i=1;i<n/2+1;i++){
	if(n%i==0){
		count++;

	}}
	if (count==1){
		return 1;
	}
	else{
		return 0;
	}



}


int main(){
	int n,res;
	printf("Enter the Number: ");
	scanf("%d",&n);
	res = isprime(n);
	printf("%d",res);
	return 0;
}
