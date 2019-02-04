#include<stdio.h>
void main() {

  int n, c, p, k, v ;
  printf ("Enter a number: ") ;
  scanf  ("%d", &v) ;
  
 k = 1 ;
 while ( k <= v ) {
	 
  c = 0 ;
  p = 1 ;
  n = k ;
  while ( n > 0 ) {
	//printf("\n( %d - %d ) = %d ", n, p,n-p) ;
	n = n - p ;
	c = c + 1 ;
	p = p + 1 ;
  }
  
  if ( n == 0 ) {
     printf ("\nNumber = %d", k) ;
     //printf ("\nRemaider = %d", n) ;
  }  
  k = k + 1 ; 
 }
  
 
}