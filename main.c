#include <stdio.h>

int main() {
  int D , O;
  int S;
  scanf ( "d %d",&D,&O);
  if ( D <= 0 || O < 0) {
    PRINTF ("invalid");
    
  } else if ( O >= 500000 && D <= 15) {
    S = 0;
    printf ("%d",S);
    
  } else if ( D <= 5) {
    S = 15000;
    printf("%d",S);
    
  } else if ( D <= 15) {
    S = 25000;
    printf("%d",S);
    
  } else {
    S = 40000;
    printf("%d",S);
  }
  return 0;
}