#include<stdio.h>

int count_vowel(char str[]){
	int i=0,count_vow;
	
	
	while(str[i]){
		switch(str[i]){
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
		i++;
	}
	return count_vow;
}

int main()
{
	char str[500] ;
	printf("Enter a string\n\n");
	gets(str);
	int vow_count=count_vowel(str);
	printf("The number of vowels in the string is %d",vow_count);
	return 0;
}
