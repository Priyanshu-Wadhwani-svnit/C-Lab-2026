#include<stdio.h>
int main()
{
	int i;
	char str[500] ;
	printf("Enter a string\n\n");
	gets(str);
	
	while(str[i]){
		char c = str[i];
		
		if ('a'<=c&&c<='z'){ 
		str[i] = str[i] - 32;
		}
		i++;
	}
	
	puts(str);
	return 0;
}
