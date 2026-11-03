#include<string.h>
#include<stdio.h>
int main()
{	printf("Enter the string:\n");
	char str[500];
	int i=0;
	gets(str);

	while (str[i]){
		printf("%d\n",str[i]);
		
		i++;
	}
	
	return 0;	
}
