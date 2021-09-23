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

    List listAfter = listDeleteEvens(list);
    printf("List without evens: ");
    showList(listAfter);

    freeList(list);
    return 0;
}
