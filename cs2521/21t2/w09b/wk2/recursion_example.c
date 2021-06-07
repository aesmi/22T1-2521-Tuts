#include <stdio.h>

int stringLengthIterative(char *s) {
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int stringLengthRecursive(char *s) {
    if (*s == '\0') {
        return 0;
    } else {
        return 1 + stringLengthRecursive(s + 1);
    }
}

int main(int argc, char **argv) {
    printf(
        "Iterative says \"%s\" has length %d\n",
        argv[1], stringLengthIterative(argv[1])
    );
    printf(
        "Recursive says \"%s\" has length %d\n",
        argv[1], stringLengthRecursive(argv[1])
    );
    return 0;
}