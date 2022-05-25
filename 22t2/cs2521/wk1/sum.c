#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/** Returns the sum of all elements in a linked list. */
int sum(List l) {
    // TODO: Complete this function!
    return 0;
}


int main(int argc, char **argv) {
    List l = read_list(argc, argv);
    printf("List sum: %d\n", sum(l));
    free_list(l);
    return EXIT_SUCCESS;
}
