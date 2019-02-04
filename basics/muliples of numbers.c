#include<stdio.h>
void main() {

  int n, c, m, mc ;
  printf ("Enter a number: ") ;
  scanf ("%d", &n) ;
  c = 1 ;
  m = 1 ;
  mc = 1 ;
  while (c <= n) {
	m = 1 ;
	mc = 1 ;
    while (mc <= c) {
	  m = m * c ;
	  mc = mc + 1 ;
	}
    printf("\n%d^%d. %d", c, c, m) ;
    c = c + 1 ;
  }
  
}