#include<stdio.h>
void main() {

	float far,cel ;
	
	printf("Enter fahrenheit: ") ;
	scanf("%f", &far) ;
	
	cel = (far-32)*5/9 ;
	
	printf("celcius(far=%.2f) = %.2f\n",far,cel) ;
	 
	far = (cel*9/5)+32;
	
	printf("fahrenheit(cel=%.2f) = %.2f",cel,far) ;
	
}