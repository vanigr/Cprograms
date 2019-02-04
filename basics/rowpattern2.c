#include<stdio.h>
void main() {

  int i = 1, j = 1, n, c ,p ;
  
  printf ("Enter no.of rows: ") ;
  scanf  ("%d", &n) ;
  
  printf ("Enter no.of columns: ") ;
  scanf  ("%d", &c) ;
  
  i = 1 ;
  while ( i <= n ) {
	j = 1 ; 
    p = i ;	
    while ( j <= c ) {
	  printf("%4d ", p) ;
	  p = p + i ;
	  j = j + 1 ;
	}
	printf ( "\n" ) ;
	i = i + 1 ;
  }  	
}