#include <stdio.h>

int main(){
  
  int units;
  
  printf("Enter the units consumed ");
  scanf("%d",&units);
  if (units <0) printf("Invalid");
  if (units >=0 && units <= 200)
  {printf("The bill is %f",0.05*units);}
  else if (units>= 201 && units <= 400 )
  {printf("The bill is %f",100 + (0.65*(units-200)));}
  else if (units >= 401 && units<=600)
  {printf("The bill is %f",230 + (0.80*(units-400)));}
  else {printf("The bill is %f",425+ (1.25*(units-600)));}
  return 0;
}
