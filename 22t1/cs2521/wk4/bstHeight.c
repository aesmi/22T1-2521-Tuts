#include <stdio.h>

#include "BST.h"


// A preprocessor macro to compute the maximum of two numbers
// Use and introduce macros like this wisely!
#define MAX(a, b) (((a) > (b)) ? (a) : (b))


/**
 * Finds the height of a binary search tree.
 *
 * Time complexity:
 * (where n is the number of nodes in the tree)
 */
int bstHeight(BST t) {
    // TODO: Implement this function and analyse its complexity
    return -1;
}


int main(int argc, char **argv) {
    BST t = argvToBST(argc, argv);
    printf("The tree has height %d\n", bstHeight(t));
    freeBST(t);
    return 0;
}
