#include <stdio.h>
#include <stdlib.h>

#include "List.h"


/** Counts the odd numbers in the list. */
int count_odds(List l) {
    // TODO: Complete this function!
    return -1;
}


int main(int argc, char **argv) {
    List l = read_list(argc, argv);
    printf("Input list: ");
    show_list(l);

    printf("The list has %d odd element(s)\n", count_odds(l));

    free_list(l);
    return EXIT_SUCCESS;
}
