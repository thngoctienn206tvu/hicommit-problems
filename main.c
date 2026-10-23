#include <stdio.h>
int main() 
{
  int XEP_HANG=1;
  switch(XEP_HANG)
    {
      case 1:
        printf("XEP_HANG_XUAT_SAC" ); break;
      case 2:
        printf("XEP_LOAI_GIOI" ); break;
      case 3:
        printf("XEP_LOAI_KHA"); break;
      case 4:
      printf("XEP_LOAI_TRUNG_BINH" ); break;
       
      default:
        printf("khong hop le");
  
         }
  return 0;
}