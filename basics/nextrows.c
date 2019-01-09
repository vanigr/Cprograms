#include<stdio.h>
void main( ) {

     int i, m, n, p ;
	 
	 printf ("Enter a number: ") ;
	 scanf ("%d", &n) ;
	 
	 i=1 ; p = 1;
	 while ( i <= n ) {
	 
	   m = 1 ;
	   while ( m <= i ) {
	   
	     //printf ("*") ;
		 //printf ("%d", m ) ;	
		 printf ("%d", p ) ;
		 m = m + 1 ;
		 p = p + 1 ;
		 if ( p == 10 ) { p = 0 ; }
	   }
	   i = i + 1 ;
	   
	   printf ("\n") ;
	 }  

} 