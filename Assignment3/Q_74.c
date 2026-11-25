#include <stdio.h>
int main(){
	int count =0,k=0;
	char str1[50],str2[50],strcon[100];
	printf("Enter The first String: \n");
	gets(str1);
	printf("Enter The second String: \n");
	gets(str2);

while(str1[count]){
	strcon[k]=str1[count];
	count++;
	k++;
}	
strcon[k]=' ';
k++;
count =0;

while(str2[count]){
	strcon[k]=str2[count];
	count++;
	k++;
}


	strcon[k]='\0';
	
	printf("The concated string is :\n");
	puts(strcon);
	
	return 0;
}
