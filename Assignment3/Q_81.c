#include<stdio.h>
int main()
{
	int i;int lower_count=0,upper_count=0,digit_count=0,special_count=0;
	char str[500] ;
	printf("Enter a string\n\n");
	gets(str);
	
	while(str[i]){
		char c = str[i];
		
		if ('a'<=c&&c<='z'){ 
		lower_count++;
		}
		else if ('A'<=c&&c<='Z'){ 
		upper_count++;
		}
		else if ('0'<=c&&c<='9'){ 
		digit_count++;
		}
		else{
		special_count++;	
		}
		
		i++;
	}
	
	printf("\n\n\n\n\nIn the given string the number of lower case characters are %d and upper case letters are %d. The number of digits are %d and number of special symbols are %d",lower_count,upper_count,digit_count,special_count);
	return 0;
}
