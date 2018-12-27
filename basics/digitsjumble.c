#include<stdio.h>
void main() {

	int n,d1,d2,d3,d4 ;
	int sum ;
	
	printf ("Enter a number: " ) ;
	scanf ("%d", &n ) ;
	
	d4 =n%10 ;
	
	n =n/10 ;
	
	d3 =n%10 ;
	
	n =n/10 ;
	
	d2 =n%10 ;
	
	d1 =n/10 ;
	
	sum=(d3*1000)+(d1*100)+(d4*10)+d2 ;
	
	printf("New number = %d",sum ) ;

}