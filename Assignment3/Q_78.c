# include <stdio.h>

int main(){
	
	char str[200],character;
	printf("Enter the String:\n");
	scanf("%[^\n]",&str);
	
	printf("Enter the character you want to check: ");
	scanf(" %c",&character);
	
	int count = 0,flag = 0;
	
	while (str[count] && flag == 0){
		
		if (str[count]==character){
			flag =1;
		}
		
		count ++;
	}
	
	if (flag == 0){
		printf("Given character is not in the string");
		
	}
	else{
		printf("Given character is in the string");
	}
	
	
	return 0;
}
