#include<stdio.h>
#include<math.h>
void main() {

	float theta,sum ;
	float sint,cost,tant,logt,sqrtt ;
	
	printf("Enter theta value: ") ;
	scanf("%f", &theta) ;
	
	sint = sin(theta) ;
	
	cost = cos(theta) ;
	
	tant = tan(theta) ;
	
	logt = log(theta) ;
	
	sqrtt = sqrt(theta) ;
	
	sum = ( sint * sint ) + ( cost * cost ) ;
	
	printf("sin(%.2f)= %.2f\n", theta, sint) ;

	printf("cos(%.2f)= %.2f\n", theta, cost) ;
	
	printf("tan(%.2f)= %.2f\n", theta, tant) ;
	
	printf("log(%.2f)= %.2f\n", theta, logt) ;
	
	printf("sqrt(%.2f)= %.2	f\n", theta, sqrtt) ;
	
	printf("\nsin^2(%.2f) + coc^2(%.2f) = %.2f", theta, theta, sum) ;
	}