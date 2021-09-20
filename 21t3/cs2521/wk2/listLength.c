#include <stdio.h>

#include "List.h"


/**
 * Computes the length of a linked list.
 */
int listLength(List list) {
    // TODO: Complete this function!
    return -1;
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

    printf("The list has length %d\n", listLength(list));

    freeList(list);
    return 0;
}
