#include <stdio.h>
int main() 
int n=10 ;
{
  int xep_hang=1;
  switch(xep_hang)
    {
      case ' xep_loai_xuat_sac':
        printf("%d",n ) break;
      case ' xep_loai_gioi':
        printf("%d",n-1 ) break;
      case ' xep_loai_kha':
        printf("%d",n-2 ) break;
      case ' xep_loai_trung_binh':
      printf("%d",n-3 ) break;
         }
  return 0;
}