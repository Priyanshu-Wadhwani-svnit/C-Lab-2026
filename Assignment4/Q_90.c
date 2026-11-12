#include <stdio.h>

int main(){
	printf("Enter the String:\n");
	char str[100];
	gets(str);
	int count_with=0,count_without=0;
	char* ptr = str;
	
	while(*ptr != '\0'){
		count_with++;
		if(*ptr != ' '){
			count_without++;
		}
		ptr++;
	}
	
	printf("length of string with spaces = %d and without spaces = %d",count_with,count_without);
	return 0;
}
