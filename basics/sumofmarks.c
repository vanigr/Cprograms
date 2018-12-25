#include<stdio.h>

void main() {

	int marksmath ;
	int markssci ;
	int marksso ; 
	int markseng ;
	int total ;
	int average ;
	
	printf("Enter marks in maths: ") ;
	scanf("%d", &marksmath) ;
	
	printf("Enter marks in science: ") ;
	scanf("%d", &markssci) ;
	
	printf("Enter marks in social: ") ;
	scanf("%d", &marksso) ;
	
	printf("Enter marks in english: ") ;
	scanf("%d", &markseng) ;
	
	total = marksmath + markssci + marksso + markseng ;
	
	printf("Total= %d\n", total) ;
	
	average=total / 4 ;
	
	printf("Average= %d\n",average) ;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	