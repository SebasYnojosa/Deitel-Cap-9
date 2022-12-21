/* Usando precision mientras se imprimen enteros, numeros flotantes y cadenas */

#include <stdio.h>

int main(){
    int i = 873;
    float f = 123.94536;
    char s[] = "Feliz Cumple";

    printf("Usando precision para enteros\n");
    printf("\t%.4d\n\t%.9d\n\n", i, i);
    printf("Usando precision para numeros flotantes\n");
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);
    printf("Usando precision para cadenas\n");
    printf("\t%.11s\n", s);
    printf("%*.*f", 7, 2, 98.736);

    return 0;
}