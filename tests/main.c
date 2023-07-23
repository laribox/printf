#include <stdio.h>
#include "main.h"


int main()
{
 
    _printf("Positive: %d\n", 123);
    printf("Positive: %d\n", 123);
    
    _printf("Negative: %d\n", -456);
    printf("Negative: %d\n", -456);

  
    _printf("Large: %d\n", 2147483647);
    printf("Large: %d\n", 2147483647); 
    _printf("Small: %d\n", -2147483648); 
    printf("Small: %d\n", -2147483648); 

  
    _printf("Single Character: %d\n", 7);
    printf("Single Character: %d\n", 7);

  
    _printf("Multiple: %d and %i\n", 123, -456);
    printf("Multiple: %d and %i\n", 123, -456);


    _printf("No specifier here.\n");
    printf("No specifier here.\n");


    _printf("Special Characters: \\n = %d, \\t = %i\n", '\n', '\t');
    printf("Special Characters: \\n = %d, \\t = %i\n", '\n', '\t');




    _printf("Very Large: %d\n", 999999999);
    printf("Very Large: %d\n", 999999999);



    /* Note: The wide characters test cases are omitted for standard printf*/

    return 0;
}

