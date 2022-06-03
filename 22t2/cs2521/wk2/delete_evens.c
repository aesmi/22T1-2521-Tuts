#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/**
 * Deletes all of the even elements from the list, returning a pointer
 * to what remains of the original list afterwards.
 */
List delete_evens(List l) {
    // TODO: Complete this function!
    return NULL;
}


int main(int argc, char **argv) {
    List l = read_list(argc, argv);
    printf("Input list: ");
    show_list(l);

    List l_after = delete_evens(l);
    printf("List without evens: ");
    show_list(l_after);

    free_list(l_after);
    return 0;
}
