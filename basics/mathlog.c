#include<stdio.h>
#include<math.h>
void main() {

	float log10,log20,log30,sum ;
	
	log10 = log(10) ;
	
	log20 = log(20) ;
	
	log30 = log(30) ;
	
	sum = log10 + log20 + log30 ;
	
	printf("log(10) = %f\n",log10) ;
	
	printf("log(20) = %f\n",log20) ;
	
	printf("log(30) = %f\n",log30) ;
	
	printf("\nlog(10)+log(20)+log(30) = %f",sum) ;


}