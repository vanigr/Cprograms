#include<stdio.h>
void main() {

	int n1,n2 ;
	
	printf ("\nThis program is to find maximum of given two numbers\n" ) ;
	
	printf("\nEnter number1: ") ;
	scanf("%d", &n1) ;
	
	printf("Enter number2: ") ;
	scanf("%d", &n2) ;
	
	if ( n1>n2 ) {
		printf("\nLarge number = %d", n1) ;
	} else {
		printf("\nLarge number = %d", n2) ;			
	}
	
}