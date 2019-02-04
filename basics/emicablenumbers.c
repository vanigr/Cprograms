#include<stdio.h>
void main() {

  int i, n, s, sn, j ;
  
  printf ("Enter a number: ") ;
  scanf  ("%d", &n ) ;
  j = 1 ;
  
  while (j <= n) {
     	  
  i = 1 ;
  s = 0 ;
   
    while ( i < j ) {
      if ( j % i == 0) {
        s = s + i ;
      }
    i = i + 1 ;
    }
    i = 1 ;
    sn = 0 ;
    
    while  ( i < s ) {
      if ( s % i == 0) {
	    sn = sn + i ;
	  }
      i = i + 1 ;
    }
    if ( sn == j ) {
      printf ("%d,%d are Emicable numbers\n", j, s ) ;
    }
 
    j = j + 1 ;
  }
}