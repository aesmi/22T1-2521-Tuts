#include <stdio.h>
#include <stdbool.h>

#include "List.h"


/**
 * Determines if a linked list is sorted or not.
 */
bool is_sorted(List list) {
    // TODO: Complete this function!
    return true;
}


int main(int argc, char **argv) {
    List list = read_list(argc, argv);
    printf("Input list: ");
    show_list(list);

    char *status = is_sorted(list) ? "sorted" : "not sorted";
    printf("The list is %s\n", status);

    free_list(list);
    return 0;
}
