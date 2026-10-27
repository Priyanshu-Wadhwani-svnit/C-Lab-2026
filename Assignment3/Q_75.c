#include <stdio.h>
int main(){
	int i=0,k=0;
	char str1[50],str2[50];
	gets(str1);

	gets(str2);

for(i=0;i<50;i++){
	printf("%d\t",str1[i]);
	printf("%d\n",str2[i]);
	if (str1[i]=='\0'|| str2[i]=='\0'){
		break;
	}
	else if (str1[i] != str2[i]){
	
	if ((str1[i]-str2[i])>0){
		printf("The first string is larger");
	}
	else{
		printf("The second string is larger");
	}
	k = 1;
	break;
	}
	
}

if(k==0){
	printf("The strings are equal");
}
	
	return 0;
}
