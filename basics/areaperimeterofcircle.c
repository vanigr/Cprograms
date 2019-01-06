#include<stdio.h>
void main() {

	float r,Area,Perimeter ;
	
	printf("Enter Radius: ") ;
	scanf("%f", &r) ;
	
	Area = 3.142 * r * r ;
	
	Perimeter = 2 * 3.142 * r ;
	
	printf("Area of Circle(r=%.4f) = %.2f\n",r,Area) ;
	
	printf("Perimeter of circle(r=%.4f) = %.2f",r,Perimeter) ;



}