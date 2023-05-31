#include "main.h"
#include <stdio.h>

int main(void)
{
     int h = 0;
     int m = 0;
     int len = 37;
     int len2 = 3887;
     int b = 'u';
     char c[] = "miracle ope";

     puts("------------ standard printf --------\n");
      h = printf("printf %c %s km i scored 100%%\n", b,     c);
     printf("return value is %d \n:", h);
        printf("Length:[%d, %i]\n", len, len);
	printf("Len:[%d]\n", len2);

     puts("\n-------- custom_printf -------------\n");
     m = _printf("printf %c %s km i scored 100%%\n", b    , c);
     printf("return value is %d \n", m);
        _printf("Length:[%d, %i]\n", len, len);
	_printf("Len:[%d]\n", len2);

 return(0);

}
