/* Usando los especificadores de conversion p, n y % */

#include <stdio.h>

int main(){
    int *ptr;
    int x = 12345, y;

    ptr = &x;
    printf("El valor de ptr es: %p\n", ptr);
    printf("La direccion de x es: %p\n\n", &x);

    printf("El total de caracteres imprimidos en esta linea es:%n", &y);
    printf(" %d\n\n",y);

    y = printf("Esta linea tiene 31 caracteres\n");
    printf("%d caracteres fueron impresos\n\n", y);

    printf("Imprimiendo un %% en una cadena con formato\n");
    return 0;
}