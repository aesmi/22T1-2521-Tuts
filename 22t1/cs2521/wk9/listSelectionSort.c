#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/**
 * Sorts a linked list using selection sort.
 */
List listSelectionSort(List l) {
    // TODO: Implement this function
    // HINT: Break it down into steps, just like list-based selection sort
    return NULL;
}


int main(int argc, char **argv) {
    List l = readList(argc, argv);

    l = listSelectionSort(l);
    printf("Sorted list: ");
    showList(l);

    return EXIT_SUCCESS;
}
