#include <stdio.h>

void main() {

   int i = 1, n ;
   
   printf ("Enter a Number= " ) ;
   scanf ("%d", &n ) ;
   
   while ( i <= n ) {
      printf ("\nNumber= %d", i ) ;
	  i++ ; // i = i + 1 // i += 1
   }


}