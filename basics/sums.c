/*
***********************************************
* Write a program to read two number and find
* 	- Addition
*	- Multiplication
*	- Division
*	- Subtraction
***********************************************
*/

#include<stdio.h>
void main() {

	int n1,n2,sum,sub,mul,div ;
	
	printf("enter n1: ") ;
	scanf("%d",&n1) ;
	
	printf("enter n2: ") ;
	scanf("%d",&n2) ;
	
	sum=n1+n2 ;
	sub=n1-n2 ;
	mul=n1*n2 ;
	div=n1/n2 ;
	
	printf("sum=%d\n",sum) ;
	printf("sub=%d\n",sub) ;
	printf("mul=%d\n",mul) ;
	printf("div=%d\n",div) ;

}

