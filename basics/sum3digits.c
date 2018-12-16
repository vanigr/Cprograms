/*
*************************************************
* Write a program to find the sum of 3-digits in 
* 3-digit number ( 100 - 999 )
* Input: 247, 987
* Output: 13, 24
*************************************************
*/

#include<stdio.h>

void main() {

	int n,sum,rem ;

	printf("enter three digit number: ") ;
	scanf("%d", &n) ;

	sum=0 ;

	rem=n%10 ;
	sum=sum+rem ;

	n=n/10 ;
	rem=n%10 ;
	sum=sum+rem ;

	n=n/10 ;
	sum=sum+n ;

	printf("sum of three digits= %d", sum) ;

}