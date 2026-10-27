#include <string.h>
#include <stdio.h>
int main(){
	
	char str1[100];
	char str2[100];
	char cpystr[100];
	char revstr[100];
	char catstr[200];
	printf("Enter 1st string:\n");
	gets(str1);
	printf("Enter 2nd string:\n");
	gets(str2);
	
	printf("%d is the length of the 1st string.\n",strlen(str1));
	
	printf("The copied string is\n");
	strcpy(cpystr,str1);
	puts(cpystr); 
	
	printf("Concating string 1 and string 2 we get\n");
	
	strcat(str1,str2);
	puts(str1);
	return 0;
}
