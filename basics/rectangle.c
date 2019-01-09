#include<stdio.h>
void main() {

   int rows, cols, spaces ;
   int ir, ic, is ;
   
   printf ("Enter no.of rows: ") ;
   scanf ("%d", &rows) ;
   
   printf ("Enter no.of columns: ") ;
   scanf ("%d", &cols) ;
   
   printf ("Enter no.of spaces: ") ;
   scanf ("%d", &spaces) ;
   
   ir = 1 ;
   
   while (ir <= rows) {
     is = 1 ;
     while (is <= spaces) {
	   printf (" ") ;
	   is = is + 1 ;
	 }  
    if ( ir == 1 || ir == rows ) {
       ic = 1 ;
       while (ic <= cols ) {
	      printf ( "*" ) ;
		  ic = ic + 1 ;
       }	   
    } else {
	   printf ("*" ) ;
	   ic = 1 ;
	   while (ic <= (cols - 2)) {
	      printf (" ") ;
		  ic = ic + 1 ;
	   }
	   printf ("*") ;
	}
	printf ("\n") ;
	ir = ir + 1 ;
	}
}