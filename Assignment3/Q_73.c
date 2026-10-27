#include <stdio.h>
int main(){
	int count =0;
	char str[50],strcp[50];
	gets(str);

while(str[count]){
	strcp[count]=str[count];
	count++;
}	
	strcp[count]='\0';
	
	printf("The copied array is :\n");
	puts(strcp);
	
	return 0;
}
