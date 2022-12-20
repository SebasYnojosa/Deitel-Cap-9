/* Usando los especificadores de conversión de enteros */
#include <stdio.h>

int main(){
    printf("%d\n", 455);
    printf("%i\n", 455); /* i es lo mismo que d para printf */
    printf("%d\n", +455);
    printf("%d\n", -455);
    printf("%hd\n", 32000);
    printf("%1d\n", 2000000000);
    printf("%o\n", 455);
    printf("%u\n", 455);
    printf("%u\n", -455);
    printf("%x\n", 455);
    printf("%X\n", 455);
    return 0;
}