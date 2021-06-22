#include <stdio.h>

#include "BST.h"


int bstCountGreater(BST bst, int value) {
    // TODO: Let's write this!
}


int main(int argc, char **argv) {
    BST bst = argvToBST(argc, argv);

    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    printf(
        "There are %d values greater than %d in the tree\n",
        bstCountGreater(bst, value), value
    );

    freeBST(bst);
    return 0;
}
