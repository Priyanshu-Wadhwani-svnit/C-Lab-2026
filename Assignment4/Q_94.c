#include <stdio.h>
int main(){
	
	char a[100],b[100];
	scanf("%[^\n]",&a);
	int count =0;
	while(a[count])
	{
		count++;	
	}
	int len = count;
	char *p = &b[len];
	*p ='\0';
	p--;	

	count =0;
	while(a[count])
	{
	*p = a[count];
	p--;
	count++;
	}
count=0;

	while(b[count]){
		printf("%c",b[count]);
		count++;
	}
	return 0;
}
