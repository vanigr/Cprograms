/*
***********************************************
* Write a program to soflve the equation
*   4x^2+3x-2.
* Read x as input
* Input: 2
* Output: Res= 20
* Input: 5
* Output: Res= 113
***********************************************
*/

#include<stdio.h>
void main() {

	int x,res ;
	printf("enter x: ") ;
	scanf("%d",&x) ;
	
	res=4*x*x+3*x-2 ;
	printf("res=%d",res) ;

}