#include<stdio.h>
void main() {
 
	int n ;
	
	printf("This program is to find given number is Even or Odd") ;
	
	printf("\nEnter a number: ") ;
	scanf("%d", &n) ;
	
	if( ( n%2 ) == 0) {
       printf("\n%d is an Even number", n) ;
	} else {
		printf("\n%d is an Odd number", n) ;
	}	
}