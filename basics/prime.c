#include<stdio.h>
void main() {
  int i, n, p ;
  
  printf ("Enter a number: ") ;
  scanf  ("%d", &n) ;
  
  i = 2 ;
  p = 1 ;
  while ( i < n ) {
    if (( n % i ) == 0 ) {
	  p = 0 ;
	  break ;
	}
    i = i + 1 ;
  }
  
  if ( p == 1 ) {
    printf ("%d is a prime number ", n) ;
  } else printf ("%d is not a prime number ", n) ;

}  