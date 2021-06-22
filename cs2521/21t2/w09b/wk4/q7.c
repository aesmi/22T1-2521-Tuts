#include <stdio.h>

#include "BST.h"


int bstNodeLevel(BST bst, int value) {
    // TODO: Let's write this!
}


int main(int argc, char **argv) {
    BST bst = argvToBST(argc, argv);

    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    printf(
        "The value %d is at level %d in the tree\n",
        value, bstNodeLevel(bst, value)
    );

    freeBST(bst);
    return 0;
}
