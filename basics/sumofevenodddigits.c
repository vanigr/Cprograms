#include<stdio.h>

void main() {

	int n,tn,d,se,so,sa ;
	
	printf ( "This Program is to find sum of even digits&sum of odd digits of the given number" ) ;
	
	printf ("\nEnter 5 digit number: ") ;
	scanf ("%d", &n) ;
	
	tn = n ;
	d = n % 10 ;
	se = 0 ;
	so = 0 ;
	sa = 0 ;
	// d 5  
	if ( d % 2 == 0 ) {
		se = (se + d) ;
	} else {
		so = (so +d)  ;
	}

	n = n / 10 ;
	d =	n % 10 ;
	// d 4
	if ( d % 2 ==0 ) {
	    se = (se + d) ;
	} else {
		so = (so + d) ;
    }
	
	n = n / 10 ;
	d = n % 10 ;
    // d 3
	if ( d % 2 == 0 ) {
		se = (se + d) ;
	} else {
		so = (so + d) ;
    }
	
	n = n / 10 ;
	d = n % 10 ;
    //d 2
	if ( d % 2 == 0 ) {
		se = (se + d) ;
	} else {
		so = (so + d) ;
	}

	n = n / 10 ;
	d = n % 10 ;
	//d 1
	if ( d % 2 == 0 ) {
		se = (se + d) ;
	} else {
		so = (so + d) ;
    }
	
	sa = se + so ;

	printf ( "Sum Of Even Digits Of %d = %d ", tn, se ) ;

	printf ( "\nSum Of Odd  Digits Of %d = %d ", tn, so ) ;

	printf ( "\nSum Of All  Digits Of %d = %d ", tn, sa ) ;	
}