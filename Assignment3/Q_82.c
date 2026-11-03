#include<stdio.h>
int main()
{
	int i,flag =0,count=0;
	char str[500] ;
	printf("Enter a string\n\n");
	gets(str);
	
	while(str[i]){
		char c = str[i];
		
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
				if (str[i+1]=='\0'){
					count++;
				}
		}
		
		i++;
	}
	printf ("%d %d",i,count);
	return 0;
}
