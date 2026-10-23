#include <stdio.h>

int main() {
  double w,h ,BMI;
  
  scanf("%1f %1f",&w,&h);
  BMI = w/((h/100)*(h/100));
         if (BMI < 18.5 )
  else if (" UNDERWEIGHT");
  if ( 18.5 <= BMI < 25);
    else if (" NORMAL");
  if ( 25<= BMI < 30);
    else if (" OVERWEIGHT");
  if ( BMI > 30);
    else if (" OBESE")
  return 0;
}