#include<stdio.h>
void main() {

	int age,n;
	
	printf("This program is to find person's phase of life") ;
	
	printf("\nEnter person's age: ") ;
	scanf("%d", &n) ;
	
	if ( n <= 10 ) {
	  printf ("Person is Child") ;
	} else if ( n < 20 ) {
	  printf ("Person is Teenager") ;
    } else if ( n <= 30 ) {
	  printf ("Person is Young") ;
	} else if ( n <=50 ) {
	  printf ("Person is Middle aged") ;
	} else if ( n < 60 ) {
	  printf ("Person is Above middle aged") ;		
	} else if ( n >= 60 ) {
	  printf ("Person is Senior Citizen") ;
	} 	
}