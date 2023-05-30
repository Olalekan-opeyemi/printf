#include "main.h"
  2 #include <stdio.h>
  3 
  4 int main(void)
  5 {
  6     int h = 0;
  7     int m = 0;
  8     int b = 'u';
  9     char c[] = "miracle ope";
 10 
 11     puts("------------ standard printf --------");
 12 
 13     h = printf("printf %c %s km i scored 100%%\n", b,     c);
 14     printf("return value is %d \n:", h);
 15 
 16     puts("-------- custom_printf -------------");
 17     m = _printf("printf %c %s km i scored 100%%\n", b    , c);
 18     printf("return value is %d \n:", m);
 19 
 20 return(0);
 21 
 22 }
