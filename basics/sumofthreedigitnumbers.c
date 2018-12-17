/*
******************************************************
* Write a program to find the sum of 3-digits in 
* 3-digit number ( 100 - 999 ), with only one variable
* Input: 247, 987
* Output: 13, 24
******************************************************
*/

#include<stdio.h>
void main() {

	int n ;

	printf("enter 3 digit number: ") ;
	scanf("%d",&n) ;

	printf("sum of 3 digits= %d",(n/100)+(n%10)+(n%100)/10) ;

}