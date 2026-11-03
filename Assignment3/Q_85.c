#include<string.h>
#include<stdio.h>
int main()
{	printf("Enter the string:\n");
	char str[500];
	int i=0;
	gets(str);
	
	printf("Enter the character to replace:\n");
	char find;
	scanf(" %c",&find);

	printf("Enter the replacement character:\n");
	char replace;
	scanf(" %c",&replace);

	while (str[i]){
		if (str[i] == find){
			str[i] = replace;
		}
		i++;
	}
	
	puts(str);	
	return 0;	
}
