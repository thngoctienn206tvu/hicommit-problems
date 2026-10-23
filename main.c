#include <stdio.h>

int main() {
  double w,h ,BMI;
  
  scanf("%1f %1f",&w,&h);
  BMI = w/((h/100)*(h/100));{
         if (BMI < 18.5 ) 
           printf("TUNDERWEIGH") }
  {
  else if ("BMI < 25 ") 
  printf (" NORMAL")}
  {
    else if ("BMI < 30")
    printf (" OVERWEIGHT")} 
  {
 else
    printf (" OBESE") }
  return 0;
}