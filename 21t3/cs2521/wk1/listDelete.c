#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/**
 * Deletes the first occurrence of a value from a linked list.
 */
void listDelete(ConList cl, int value) {
    // TODO: Complete this function!
}


int main(int argc, char **argv) {
    ConList cl = readConList(argc, argv);

    int value;
    printf("Value to delete: ");
    scanf("%d", &value);

    listDelete(cl, value);
    printf("List after deleting %d is ", value);
    showConList(cl);

    return EXIT_SUCCESS;
}
