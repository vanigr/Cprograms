/*
***********************************************
* Write a program to find power of a given 
* number and its power.
***********************************************
*/
#include<stdio.h>
#include<math.h>

void main() {

	float n1,n2, result ;
	
	printf("Enter a number: ") ;
	scanf("%f", &n1) ;
	
	printf("Enter power number: ") ;
	scanf("%f", &n2) ;
	
	
	result = pow(n1, n2) ;
	
	printf("pow (%.2f, %.2f)= %.2f", n1, n2, result ) ;



}