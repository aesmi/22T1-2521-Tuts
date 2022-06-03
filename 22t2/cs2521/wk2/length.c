#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/** Computes the length of a linked list. */
int length(List list) {
    // TODO: Complete this function!
    return -1;
}


int main(int argc, char **argv) {
    List list = read_list(argc, argv);
    printf("Input list: ");
    show_list(list);

    printf("The list has length %d\n", length(list));

    free_list(list);
    return EXIT_SUCCESS;
}
