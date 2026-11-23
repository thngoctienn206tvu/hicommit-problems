
#include <stdio.h>
int main() {
    double d, tien;
  scanf("%lf", &d);
  if (d <= 1)
  {
        tien = d * 7500;
    }
    else if (d <= 5)
    {
      tien = 7500 + ( d - 1 ) * 13000 ;
    }
  else
    {
    tien = 7500 + 4 * 13000 + ( d - 5 ) * 11000;
  }
  printf (" %d\n ",(int)tien);
  return 0;
}
