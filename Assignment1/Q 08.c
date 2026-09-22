#include <stdio.h>

int main(){
	
	int sec = 31558150;
	int day = sec /86400;
	int day_left = sec % 86400;
	int hr = day_left / 3600;
	int hr_left = day_left % 3600;
	int min = hr_left /60;
	
	printf("Day : %d\n",day);
	printf("Hours : %d\n",hr);
	printf("Minute: %d",min);
	
	return 0;
}
