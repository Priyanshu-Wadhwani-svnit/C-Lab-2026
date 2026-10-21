#include <stdio.h>
int count =0,n;
void vow(char a){
	if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		printf("The character %c is a vowel",a);
	}
	else{
		printf("The character %c is not a Vowel",a);
	}
}

int main(){
char c;
	printf("Enter the character to be checked: ");
	scanf(" %c",&c);
	
		vow(c);	
	return 0;
}	
