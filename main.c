
#include <stdio.h>
int main() {
    double ngtiendethuong, tien;
  scanf("%lf", &ngtiendethuong);
  if (ngtiendethuong <= 1)
  {
        tien = ngtiendethuong * 15000;
    }
    else if (ngtiendethuong <= 5)
    {
      tien = 15000 + ( ngtiendethuong - 1 ) * 13000 ;
    }
  else
    {
    tien = 15000 + 4 * 13000 + ( ngtiendethuong - 5 ) * 11000;
  }
  printf (" %ngtiendethuong\n ",(int)tien);
  return 0;
}
