#include <stdio.h>

int main(){
	printf("Enter the String:\n");
	char str[100];
	gets(str);
	int count_vow=0;
	char* ptr = str;
	
	while(*ptr != '\0'){
		switch(*ptr){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': count_vow++;
		}
	ptr++;
	}
	
	printf("number of vowels in the string is %d",count_vow);
	
	return 0;
}
