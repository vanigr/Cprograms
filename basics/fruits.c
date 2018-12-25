#include<stdio.h>
void main() {

	int pm,po,pa ;
	
	int nm,no,na ;
	
	int tcm,tco,tca ;
	
	int ta ;

	printf("enter price of mangoes: ") ;
	scanf("%d", &pm) ;
	
	printf("enter price of oranges: ") ;
	scanf("%d", &po) ;
	
	printf("enter price of  apples: ") ;
	scanf("%d", &pa) ;
	
	printf("\n");
	
	printf("enter number of mangoes: ") ;
	scanf("%d", &nm) ;
	
	printf("enter number of oranges: ") ;
	scanf("%d", &no) ;
	
	printf("enter number of  apples: ") ;
	scanf("%d", &na) ;
	
	tcm=pm*nm ;
	
	tco=po*no ;
	
	tca=pa*na ;
	
	printf("\n----------------------------");
	
	printf("\ntotal cost of mangoes= %d\n",tcm) ;
	
	printf("total cost of oranges= %d\n",tco) ;
	
	printf("total cost of  apples= %d\n",tca) ;
	printf("----------------------------\n");
	ta=tcm+tco+tca ;
	
	printf("total amount         = %d\n",ta) ;
	printf("----------------------------\n");
		
}