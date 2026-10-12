#include <stdio.h>

int main(){
  
  float sales;
  
  printf("Enter the sales in Rs. ");
  scanf("%f",&sales);
  
  if (sales <= 500)
  {printf("The commission is %f",0.05*sales);}
  else if (sales<=2000)
  {printf("The commision is %f",35 + (0.1*(sales-500)));}
  else if (sales<=5000)
  {printf("The commision is %f",185 + (0.12*(sales-2000)));}
  else {printf("The commision is %f",0.125*sales);}
  return 0;
  }
