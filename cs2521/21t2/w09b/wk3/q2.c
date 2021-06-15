#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>


// Represents the nth degree polynomial a[0] + a[1]z + ... + a[n]z^n.
typedef struct polynomial {
    int *a;
    int  degree;
} Polynomial;


/** Evaluates p(x) for an nth degree polynomial p in O(n) time. */
double evalPolynomial(Polynomial p, double x) {
    // TODO: Let's implement this!
}


int main(int argc, char **argv) {
    assert(argc > 1);

    double x;
    sscanf(argv[1], "%lf", &x);

    // This is the polynomial p(z) = 1 - z + z^2 - z^3.
    int coefficients[4] = { 1, -1, 1, -1 };
    Polynomial p = {
        .a = coefficients,
        .degree = 3
    };

    printf("p(%.2lf) = %.2lf\n", x, evalPolynomial(p, x));

    return EXIT_SUCCESS;
}
