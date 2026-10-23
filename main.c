#include <stdio.h>
int main() 
{
  int xep_hang=1;
  switch(xep_hang)
    {
      case 1:
        printf("xep_loai_xuat_sac" ); break;
      case 2:
        printf("xep_loai_gioi" ); break;
      case 3:
        printf("xep_loai_kha"); break;
      case 4:
      printf("xep_loai_trung_binh" ); break;
      case 5:
        printf ("xep_loai_trung_binh"); break;
      default:
        printf("khong hop le");
  
         }
  return 0;
}