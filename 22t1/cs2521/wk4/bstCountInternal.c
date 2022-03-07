#include <stdio.h>

#include "BST.h"


#define NOT_IN_TREE -1


/**
 * Counts the number of internal nodes in a tree. An internal node is one with
 * at least 1 child (i.e. not a leaf node).
 *
 * Time complexity:
 * (where n is the number of nodes)
 */
int bstCountInternal(BST t) {
    // TODO: Implement this function and analyse its complexity
    return 0;
}


int main(int argc, char **argv) {
    BST t = argvToBST(argc, argv);
    printf("There are %d internal nodes in the tree\n", bstCountInternal(t));
    freeBST(t);
    return 0;
}
