#include<stdio.h>
void main() {
	
	int n,d1,d2,d3,d4 ;
	
	printf("Enter 4 digit nuber: ") ;
	
	scanf("%d", &n) ;
	
	d4=n%10 ;
	
	n=n/10 ;
	
	d3=n%10 ;
	
	n=n/10 ;
	
	d2=n%10 ;
	
	d1 = n/10 ;
	
	printf("%d %d %d %d", d1, d2, d3, d4) ;
	
}

