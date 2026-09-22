#include <stdio.h>

int main(){
	int seconds;
	
	printf("Enter time in Seconds: ");
	scanf("%d",&seconds);
	
	int minutes = seconds/60;
	int seconds_left = seconds%60;
	int hours = minutes/60;
	int minutes_left = minutes%60;
	
	printf("\n\nThus the given seconds is HOUR:MINUTE:SECONDS ----> %d:%d:%d",hours,minutes_left,seconds_left);
	
	return 0;
}
