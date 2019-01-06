#include<stdio.h>
void main() {

	int n1,n2,n3,a,b ;
	
	printf ( "Enter number1: " ) ;
	scanf ( "%d", &n1) ;
	
	printf ( "Enter number2: " ) ;
	scanf ( "%d", &n2 ) ;
	
	printf ( "Enter number3: " ) ;
	scanf ( "%d", &n3 ) ;
	
	/*
	if ( ( n1 > n2 ) && ( n1 > n3 ) ) {
		a = n1 ;
	} else if ( ( n2 > n3 ) && ( n2 > n1 ) ) {
		a = n2 ;
	} else if ( ( n3 > n1 ) && ( n3 > n2 ) ) {
		a = n3 ;
	}

	if ( ( n1 < n2 ) && ( n1 < n3 ) ) {
		b = n1 ;
	} else if ( ( n2 < n3 ) && ( n2 < n1 ) ) {
		b = n2 ;
	} else if ( ( n3 < n1 ) && ( n3 < n2 ) ){
		b = n3 ;
	}
	*/
	
	a = n1 ;
	b = n1 ;
	
	if ( a < n2 ) { a = n2 ; }
	if ( a < n3 ) { a = n3 ; }
	
	if ( b > n2 ) { b = n2 ; }
	if ( b > n3 ) { b = n3 ; }
	

	printf ( "\nMax Number Of (%d, %d, %d)= %d ", n1, n2, n3, a ) ;	
	
	printf ( "\nMin Number Of (%d, %d, %d)= %d ", n1, n2, n3, b ) ;
}