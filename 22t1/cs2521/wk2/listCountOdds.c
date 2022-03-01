#include <stdio.h>

#include "List.h"


/**
 * Counts the number of odd elements in a linked list.
 */
int listCountOdds(List list) {
    // TODO: Complete this function!
    return -1;
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

    printf(
        "The list has %d odd elements\n",
        listCountOdds(list)
    );

    freeList(list);
    return 0;
}
