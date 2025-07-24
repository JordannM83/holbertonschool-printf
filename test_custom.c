#include "main.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;
    
    printf("=== Test de comptage des caractères ===\n");
    
    len1 = _printf("Hello %s, you are %d years old!\n", "Alice", 25);
    len2 = printf("Hello %s, you are %d years old!\n", "Alice", 25);
    
    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);
    
    printf("\n=== Test avec chaîne NULL ===\n");
    len1 = _printf("String: %s\n", (char *)NULL);
    printf("_printf returned: %d\n", len1);
    
    printf("\n=== Test avec nombre négatif ===\n");
    len1 = _printf("Negative: %d\n", -12345);
    len2 = printf("Negative: %d\n", -12345);
    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);
    
    printf("\n=== Test avec zéro ===\n");
    len1 = _printf("Zero: %d\n", 0);
    len2 = printf("Zero: %d\n", 0);
    printf("_printf returned: %d\n", len1);
    printf("printf returned: %d\n", len2);
    
    return (0);
}
