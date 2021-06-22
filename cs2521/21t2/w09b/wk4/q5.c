#include <stdio.h>

#include "BST.h"


int bstHeight(BST bst) {
    // TODO: Let's write this!
}


int main(int argc, char **argv) {
    BST bst = argvToBST(argc, argv);

    printf("The tree has height %d\n", bstHeight(bst));

    freeBST(bst);
    return 0;
}
