#include<stdio.h>
void main() {
   
   int i = 1, se = 0, so = 0, n ;
   
   printf ("Enter a number: ") ;
   scanf ("%d", &n) ;
   
   while (i <= n) {
   
    if (( i % 2 ) == 0){
	   se = se + i ;
	} else so = so + i ;

    i = i + 1 ;
   }

    printf ("\nSum Of Even Numbers = %d", se) ;
    
    printf ("\nSum Of Odd Numbers  = %d", so) ;	

}