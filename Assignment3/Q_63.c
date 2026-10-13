# include <stdio.h>

int x,y;

void rev(){
	int temp;
	temp = x;
	x=y;
	y=temp;
}

int main(){

printf("Enter the Value of x: ");
scanf("%d",&x);

printf("Enter the value of y: ");
scanf("%d",&y);

rev();

printf ("Now the value of x is %d and that of b is %d",x,y);
return 0;
}
