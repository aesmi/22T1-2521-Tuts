#include <stdio.h>

#include "List.h"


/**
 * Computes the length of a linked list iteratively.
 */
int listLength(List list) {
    // TODO: Complete this function!
    return -1;
}

/**
 * Computes the length of a linked list recursively.
 */
int listLengthRec(List list) {
    // TODO: Complete this function!
    return -1;
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

    printf(
        "The iterative function says the list has length %d\n",
        listLength(list)
    );

    printf(
        "The recursive function says the list has length %d\n",
        listLengthRec(list)
    );

    freeList(list);
    return 0;
}
