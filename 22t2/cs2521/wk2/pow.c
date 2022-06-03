#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


/** Computes x^n in O(n) time. */
int pow_linear(int x, uint n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * x;
    }
    return res;
}

/** Computes x^n in O(log n) time. */
int pow_log(int x, uint n) {
    // TODO: Complete this function!
    return 0;
}


int main(int argc, char **argv) {
    assert(argc > 2);

    int x = atoi(argv[1]);
    uint n = atoi(argv[2]);

    printf(
        "pow_linear says that %d^%i is %d\n",
        x, n, pow_linear(x, n)
    );

    printf(
        "pow_log says that %d^%i is %d\n",
        x, n, pow_log(x, n)
    );

    return EXIT_SUCCESS;
}
