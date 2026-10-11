# include <stdio.h>
int main (){
	char z;
	
	printf("Enter tha Cahracter: ");
	scanf(" %c",&z);
	
	printf("%s",('a'<=z&&z<='z')?"small":"not small");

	return 0;
}
