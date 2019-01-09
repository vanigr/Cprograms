#include<stdio.h>
void main() {

   int i = 1, n, f = 1 ;
   
   printf ("Enter a number: ") ;
   scanf ("%d", &n) ;
   
   while ( i <= n ) {
    f = f * i ;
	i = i+ 1 ;
	}
    printf ( "\nFactorial of %d = %d", n, f) ;

}