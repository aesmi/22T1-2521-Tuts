#include <stdio.h>
#include <stdlib.h>


int hash(char *key, int n) {
    int h = 0;
    for (char *c = key; *c != '\0'; c++)
        h += *c;
    return h % n;
}


int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "enter the input properly please\n");
        exit(EXIT_FAILURE);
    }

    printf("hash(%s, 63) = %d\n", argv[1], hash(argv[1], 63));

    return EXIT_SUCCESS;
}
