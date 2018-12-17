/*
*******************************************************
* Write a program to find the sum of digits in 1st, 
* 10th and 100th positions in the input 3-digit numbers 
* Input: 247, 987 , 123
* Output: 12(100th), 14(10th), 17(1st)
*******************************************************
*/

#include<stdio.h>
void main() {

   int n1, n2, n3 ;
   int sd1, sd2, sd3 ;
   
   printf( "Enter 3 3-digits Numbers\n" ) ;
   printf("Enter 1st 3-digit number: ") ;
   scanf("%d", &n1) ;
   
   printf("Enter 2nd 3-digit number: ") ;
   scanf("%d", &n2) ;
   
   printf("Enter 3rd 3-digit number: ") ;
   scanf("%d", &n3) ;
    
   sd3=(n1%10)+(n2%10)+(n3%10) ;
   
   n1=n1/10 ;
   n2=n2/10 ;
   n3=n3/10 ;
   
   sd2=(n1%10)+(n2%10)+(n3%10) ;
   
   
   sd1=(n1/10)+(n2/10)+(n3/10) ;
   
   printf("sd1(100th)=%d\n",sd1) ;
   printf("sd2(10th)=%d\n",sd2) ;
   printf("sd3(1st)=%d\n",sd3) ;
   
}   
   
   