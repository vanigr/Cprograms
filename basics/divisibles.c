#include<stdio.h>
void main() {

	int n1,n2 ;
	
	printf ("This program is to find divisibles") ;
	
	printf ("\n\nEnter number1: ") ;
	scanf ("%d", &n1) ;
	
	printf ("Enter number2: ") ;
	scanf ("%d", &n2) ;

	if ( n1 % n2 == 0 ) {
	   printf ("\n%d is divisible by %d", n1,n2) ;
	} else if ( n2 % n1 ==0 ) {
		printf ("\n%d is divisible by %d", n2,n1) ;
	} else {
		printf ("%d,%d are not divisible by each other", n1,n2) ;
	}


}