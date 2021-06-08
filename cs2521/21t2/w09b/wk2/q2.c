#include <stdio.h>

#include "List.h"


int listCountOdds(List list) {
    // First, let's do this the COMP1511 way.
}

int listCountOddsRec(List list) {
    // Base case?
    // Recursive cases?
}


int main(int argc, char **argv) {
    List list = readList(argc, argv);
    printf("Input list: ");
    showList(list);

    printf(
        "Iterative says the list has %d odd elements\n",
        listCountOdds(list)
    );
    printf(
        "Recursive says the list has %d odd elements\n",
        listCountOddsRec(list)
    );

    freeList(list);
    return 0;
}