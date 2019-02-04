#include<stdio.h>
void main( ) {
  int n, c, sgv, bn, pn, ipn, pnv, nbn, npn, npnv ; 
  printf("Enter a number: ") ;
  scanf("%d", &n) ;
  c = 2 ;
  sgv = n ;
  while ( c <= (n/2) ) {
    bn = c ;
	pn = 2 ;
	while (1){
	  ipn = 1;
	  pnv = 1;
	  while (ipn <= pn ) {
	    pnv = pnv * bn ;
	    ipn = ipn + 1 ;
	  }  
	  if (pnv > n) {
	    break ;
	  }
      if ( (n - pnv) < sgv ) {
        sgv = ( n - pnv ) ;
		npnv = pnv ;
        nbn = bn ;
        npn = pn ;
      }
      pn = pn + 1 ;
    }
    c = c + 1 ;
  }
  
  printf ("\n%d", npnv );
  printf ("\n%d", sgv) ;
  printf ("\n%d", nbn) ;
  printf ("\n%d", npn) ;
}  