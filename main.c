#include <stdio.h>

int main() {
  double w,h ,BMI;
  
  scanf("%1f %1f",&w,&h);
  BMI = w/((h/100)*(h/100));
         if (BMI < 18.5 )
           printf("TUNDERWEIGH");
  else if ("18.5 <= BMI < 25 ");
  printf (" NORMAL");
    else if ("25<= BMI < 30");
    printf (" OVERWEIGHT");
 else if ( BMI > 30);
    printf (" OBESE")
  return 0;
}