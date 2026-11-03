#include<string.h>
#include<stdio.h>
int main()
{
	char str[500];
	char str_ori[500];

gets (str);

strcpy(str_ori,str);
strrev(str);

if (strcmp(str,str_ori)==0){
	printf("palindrome");
}else{
	printf("not palindrome");
}

return 0;	
}
