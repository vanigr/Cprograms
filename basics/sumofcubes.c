#include<stdio.h>
void main() {
 
	int n,d,sum ;
	
	printf("Enter 3 digit number: ") ;
	scanf("%d", &n) ;
	
	sum=0 ;
	
	d=n%10 ;
	
	sum=sum+(d*d*d) ;

	n=n/10 ;
	
	d=n%10 ;
	
	sum=sum+(d*d*d) ;
	
	d=n/10 ;
	
	sum=sum+(d*d*d) ;
	
	printf("sum of 3 digit number =%d",sum) ;
	
	
}