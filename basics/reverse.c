#include<stdio.h>
void main() {

	int n,tn,rn ;
	
	printf("enter 3 digit number: ");
	scanf("%d", &n);
	
	tn = n ;
	
	rn=n%10 ;
	
	n=n/10 ;
	
	rn=(rn*10)+n%10 ;
	
	rn=(rn*10)+n/10 ;
	
	printf("Reverse number of %d is %d",tn,rn) ; 




}