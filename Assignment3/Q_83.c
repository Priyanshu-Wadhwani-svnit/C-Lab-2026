#include<string.h>
#include<stdio.h>
int main()
{
	int i;
	char str[500] ;
	printf("Enter a string\n\n");
	gets(str);
	int leng = strlen(str);
	
	for(int i=0;i<leng;i++){
		for(int j=0;j<leng-1-i;j++){
			if (str[j]>str[j+1]){
				char tamp;
				tamp = str[j];
				str[j] = str[j+1];
				str[j+1] = tamp;
			}
		}
	}
	
	return 0;
}
