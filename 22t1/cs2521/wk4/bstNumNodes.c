#include <stdio.h>

#include "BST.h"


/**
 * Counts the number of nodes in a binary search tree.
 *
 * Time complexity:
 * (where n is the number of nodes)
 */
int bstNumNodes(BST t) {
    // TODO: Implement this function and analyse its complexity
    return 0;
}


int main(int argc, char **argv) {
    BST t = argvToBST(argc, argv);
    printf("The tree has %d node(s)\n", bstNumNodes(t));
    freeBST(t);
    return 0;
}
