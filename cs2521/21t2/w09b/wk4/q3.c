#include <stdio.h>

#include "BST.h"


int bstNumNodes(BST bst) {
    // TODO: Let's write this!
}


int main(int argc, char **argv) {
    BST bst = argvToBST(argc, argv);

    printf("The tree has %d node(s)\n", bstNumNodes(bst));

    freeBST(bst);
    return 0;
}
