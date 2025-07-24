#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int len1, len2;
    
    printf("=== Test INT_MIN ===\n");
    len1 = _printf("INT_MIN: %d\n", INT_MIN);
    len2 = printf("INT_MIN: %d\n", INT_MIN);
    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);
    
    printf("\n=== Test INT_MAX ===\n");
    len1 = _printf("INT_MAX: %d\n", INT_MAX);
    len2 = printf("INT_MAX: %d\n", INT_MAX);
    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);
    
    return (0);
}
