/* Imprimiendo numeros flotantes como especificadores de conversion de flotantes */

#include <stdio.h>

int main(){
    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89);
    printf("%e\n", -1234567.89);
    printf("%E\n", 1234567.89);
    printf("%f\n", 1234567.89);
    printf("%g\n", 1234567.89);
    printf("%G\n", 1234567.89);
    printf("%e\n", 0.0000875);
    printf("%E\n", 0.0000875);
    printf("%f\n", 0.0000875);
    printf("%g\n", 0.0000875);
    printf("%G\n", 0.0000875);

    return 0;
}