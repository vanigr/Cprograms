#include<stdio.h>
void main() {

  int m, n, p, c ;
  printf ("Enter number1: ") ;
  scanf  ("%d", &m) ;
  
  printf ("Enter number2: ") ;
  scanf  ("%d", &n) ;
  
  p = m ;
  c = 0 ;
  
  while ( p >= n ) {
    p = p - n ;
	c = c + 1 ;
  }
  printf ("\nQuotient  of %d, %d = %d ", m, n, c ) ;
  printf ("\nRemainder of %d, %d = %d ", m, n, p ) ;  
  
  }