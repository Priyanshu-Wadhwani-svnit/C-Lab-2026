#include <stdio.h>

int main(){
	
	char c;
	printf("Enter the character: ");
	scanf("%c",&c);
	int ASCI = (int)c;
	
	if(ASCI>=65 && ASCI <= 90){
		printf("It is a capital character.");
	}
	else if (ASCI >= 49 && ASCI <= 57){
		printf("It is a digit.");
	}
	else if (ASCI>= 97 && ASCI <= 122){
		printf("It is a small case character.");
	}
	else{
		printf("It is a Special Character.");
	}
	return 0;
}
