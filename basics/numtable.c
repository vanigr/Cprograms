#include <stdio.h>

void main() {

   int i,n ;
   
   printf ("Enter a number: ") ;
   scanf ("%d", &n) ;
   
   i = 1 ;
   
   while ( i <= 10 ) {   
      printf ("\n%3d X %2d = %3d ", n, i, n*i ) ;
	  i=i+1 ;
   }
}
