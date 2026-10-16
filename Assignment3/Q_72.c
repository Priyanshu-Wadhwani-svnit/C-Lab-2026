# include <stdio.h>


int main(){
	char str[200];
	int count=0;
	printf("Enter the string: \n");
	scanf("%[^\n]",&str);
	while(str[count]){
		count ++;
	}
	
	printf("%d",count);
	return 0;
}
