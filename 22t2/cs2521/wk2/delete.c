#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/** Deletes the first occurrence of a value from a linked list. */
void delete(List l, int value) {
    // TODO: Complete this function!
    return;
}


int main(int argc, char **argv) {
    List l = read_list(argc, argv);

    int value;
    printf("Value to delete: ");
    scanf("%d", &value);

    delete(l, value);
    printf("List after deleting %d is ", value);
    show_list(l);

    free_list(l);
    return EXIT_SUCCESS;
}
