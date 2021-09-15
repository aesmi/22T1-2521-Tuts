#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/**
 * Returns the sum of all elements in a linked list.
 */
int listSum(List l) {
    // TODO: Complete this function!
    return 0;
}


int main(int argc, char **argv) {
    List l = readList(argc, argv);
    printf("List sum: %d\n", listSum(l));
    freeList(l);

    return EXIT_SUCCESS;
}
