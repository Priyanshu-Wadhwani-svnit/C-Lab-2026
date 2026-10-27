#include <stdio.h>
#include<string.h>
int main(){
	int i=0,k=0;
	char str1[50],str2[50];
	gets(str1);
	
	int length = strlen(str1);
	
	str2[length] = '\0';
	
	for (i= length - 1;i>=0;i--){
		str2[i] = str1[length-1-i];
	}
	
	puts(str2);	
	return 0;
}
