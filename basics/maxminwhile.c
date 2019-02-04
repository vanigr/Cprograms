#include<stdio.h>
void main() {

  int n, s, max, min ;
  
  printf ("Enter number: ") ;
  scanf  ("%d", &n) ;
  
  s = 0 ;
  max = n ;
  min = n ;
  
  while (n != -111) {
    if ( n > max ) {
	  max = n ;
	}
    
    if ( n < min ) {
      min = n ;
    }

	s = s + n ;
  
    printf("Enter another number: ") ;
	scanf ("%d", &n) ;
  }

  printf("\nSum of given numbers: %d", s) ;
  printf("\nMaximum of given numbers: %d", max) ;
  printf("\nMinimum of given numbers: %d", min) ;  
    
}