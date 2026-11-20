#include<stdio.h>
int main()
{
	int flag =0,count=0;
	char str[500] ,*ptr;
	
	ptr = str;
	printf("Enter a string\n\n");
	gets(str);
	
	while(*ptr){
		char c = *ptr;
		
		switch(c){
			case ' ':
			case '.':
			case '!':
			case '?':
			case ',': if (flag ==1){
				flag = 0;
				count++;
				
				break;
			}
			default :
				if (flag==0){
					flag = 1;
				}
				if (*(ptr+1)=='\0'){
					count++;
				}
		}
		
		ptr++;
	}
	printf ("%d",count);
	return 0;
}
