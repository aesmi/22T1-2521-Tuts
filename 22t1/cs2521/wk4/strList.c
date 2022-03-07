#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct node *Node;

struct node {
    char *word;
    Node  next;
};


Node createNode(char *word) {
    Node n = malloc(sizeof(struct node));
    assert(n != NULL);

    n->word = word;
    n->next = NULL;
    return n;
}


/**
 * TODO: What is the problem with this code?
 * HINT: How do pointers work again?
 */
int main(void) {
    // Assume words are no longer than 99 characters
    // Why just 99, when the array has room for 100 characters?
    char buffer[100];

    scanf("%s", buffer);
    Node n1 = createNode(buffer);
    scanf("%s", buffer);
    n1->next = createNode(buffer);
    scanf("%s", buffer);
    n1->next->next = createNode(buffer);

    printf(
        "\"%s\" -> \"%s\" -> \"%s\" -> X\n",
        n1->word, n1->next->word, n1->next->next->word
    );

    free(n1->next->next);
    free(n1->next);
    free(n1);
}
