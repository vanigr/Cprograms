#include<stdio.h>
void main() {

	int n1,n2,n3 ;
	int da,db,dc ;
	int rn1,rn2 ;
    int temp ;
	
	printf ("This program is to find maximum difference between given numbers") ;
	
	printf ("\nEnter number1: ") ;
	scanf ("%d", &n1) ;
	
	printf ("Enter number2: ") ;
	scanf ("%d", &n2) ;
	
	printf ("Enter number3: ") ;
	scanf ("%d", &n3) ;
	
	da = n1 - n2 ;
	db = n2 - n3 ;
	dc = n3 - n1 ;
	
	if ( da < 0 ) {
	  da = da * (-1) ;
	}

	if ( db < 0 ) {
		db = db * (-1) ;
	}

	if ( dc < 0 ) {
		dc = dc * (-1) ;
	}

	if (da > db && da > dc) {
	   rn1 = n1 ;
	   rn2 = n2 ;
	}

	if (db > dc && db > da) {
		rn1 = n2 ;
		rn2 = n3 ;
	}

	if (dc > da && dc > db) {
		rn1 = n3 ;
		rn2 = n1 ;
	}	

	if ( rn1 > rn2 ) { 
	   temp = rn1; 
	   rn1 = rn2 ; 
	   rn2 = temp ; 
	}
	
	printf ("\n%d and %d are the numbers with maximum difference", rn1, rn2) ;
}