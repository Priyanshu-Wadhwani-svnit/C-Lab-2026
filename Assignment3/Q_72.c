# include <stdio.h>


int main(){
	char str[200];
	int count=0;
	scanf("%[^\n]",&str);
	while(str[count]){
		count ++;
	}
	
	printf("%d",count);
	return 0;
}
