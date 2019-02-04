#include<stdio.h>
void main() {

  int i, b, p, r ;
  
  printf ("Enter base number: ") ;
  scanf  ("%d", &b) ;
  
  printf ("Enter power number: ") ;
  scanf  ("%d", &p) ;
  
  i = 1 ;
  r = 1 ;
  while (i <= p) {
    r = r * b ;
	i = i + 1 ;
  }
  printf ("\n%d power of %d = %d", b, p, r) ; 


}