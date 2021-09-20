#include <stdio.h>
#include <stdbool.h>

#include "List.h"


/**
 * Deletes all of the even elements from the list, returning a pointer
 * to what remains of the original list afterwards.
 */
List listDeleteEvens(List list) {
    // TODO: Complete this function!
    return true;
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

    char *status = listIsSorted(list)
        ? "sorted"
        : "not sorted";
    printf("The list is %s\n", status);

    freeList(list);
    return 0;
}
