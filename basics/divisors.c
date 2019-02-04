#include<stdio.h>
void main() {

  int i, n, s, d  ;
  
  printf ("Enter a number: ") ;
  scanf  ("%d", &n) ;
  i = 1 ;
  s = 0 ;
  
  while ( i < n ) {
	  
    d = 1 ;
	s = 0 ;
	while ( d < i ) {
	  
       if ( i % d == 0 ) {
	     //printf ( "%d, ", i ) ;
	     s = s + d ;
	   }
	   d = d + 1 ;
    }
	 
	if ( s == i ) {
       printf ( "\n%d is a perfect number ", i ) ;
    }
	i = i + 1 ;
  }
  
  printf ("\n");
  while ( 1 ) {
	printf ( "|\b" ) ;
    sleep ( 1 ) ;
    printf ( "\\\b" ) ;
    sleep ( 1 ) ;
    printf ( "|\b" ) ;
    sleep ( 1 ) ;
    printf ( "/\b" ) ;
    sleep ( 1 ) ;	
	
  }
  
  	
}