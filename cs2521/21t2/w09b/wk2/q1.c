#include <stdio.h>

#include "List.h"


int listLength(List list) {
    // First, let's do this the COMP1511 way.
}

int listLengthRec(List list) {
    // Base case?
    // Recursive case?
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

    printf(
        "Iterative says the list has length %d\n",
        listLength(list)
    );
    printf(
        "Recursive says the list has length %d\n",
        listLengthRec(list)
    );

    freeList(list);
    return 0;
}
