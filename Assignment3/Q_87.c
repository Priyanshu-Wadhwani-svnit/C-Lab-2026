#include<string.h>
#include<stdio.h>
int main()
{	
	char name_array[5][100];
	char tamp[100];
	for(int i=0;i<5;i++){
		gets(name_array[i]);
	}
	
	for(int i=0; i<5;i++){
		for(int j=0;j<5-1-i;j++){
			if (strcmp(name_array[j],name_array[j+1])>0){
				strcpy(tamp,name_array[j]);
				strcpy(name_array[j],name_array[j+1]);
				strcpy(name_array[j+1],tamp);
			}
		}
	}
	
	for(int i=0;i<5;i++){
		puts(name_array[i]);
	}
	return 0;	
}
