#include <stdio.h>

int main(){
	
	int hour,minute,second;
	
	printf("Enter Time in Hour Minute Time(with spaces in single line): ");
	scanf("%d %d %d",&hour,&minute,&second);
	
	printf ("The total time in seconds is: %d",((hour*3600)+(minute*60)+second));
	
return 0;
}
