#include<stdio.h>
void main() {

  int i = 1, j, s, n, p ;
  
  printf ("Enter no.of rows: ") ;
  scanf  ("%d", &n ) ;
  
  while( i <= n ) {
    printf ("%d)", i ) ;
	
	j = 1 ;
	
    while ( j <= i ) {
		 
	   s = 1 ;
	   
       while ( s <= i ) {
         printf (".") ;
         s = s + 1 ;
       }
	
       p = 1 ;
       while ( p <= i ) {	   
          printf ( "%d", i ) ;
	      p++ ;
	   }
	   
	   j++ ;
    }
	 
     printf ( "\n" ) ;
     i = i + 1 ;
  }
  
}