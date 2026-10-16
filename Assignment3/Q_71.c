# include <stdio.h>
int length(char str[]){
	int count =0;
	
	while(str[count]){
		count ++;
	}
	return count;
}

int main(){
	char str[200];
	int count;
	printf("Enter teh String: \n");
	scanf("%[^\n]",&str);
	
	count = length(str);
	printf("%d",count);
	return 0;
}
