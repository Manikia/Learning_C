#include <stdio.h>
#include <complex.h>

int main() {
    // Declare two complex numbers
    double complex z1 = 4.0 + 3.0*I;
    double complex z2 = 1.0 - 2.0*I;

    // Perform addition
    double complex z3 = z1 + z2;
    printf("Addition: %.2f + %.2fi\n", creal(z3), cimag(z3));

    // Perform multiplication
    double complex z4 = z1 * z2;
    printf("Multiplication: %.2f + %.2fi\n", creal(z4), cimag(z4));

    // Get the magnitude of z1
    double mag = cabs(z1);
    printf("Magnitude of z1: %.2f\n", mag);

    return 0;
}
